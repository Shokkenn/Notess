#include <iostream>
#include <fstream>
#include <string>

class FileHandler {
public:
    FileHandler(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Cannot open file.");
        }
        std::cout << "File opened: " << filename << std::endl;
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed." << std::endl;
        }
    }

    void write(const std::string& data) {
        if (file.is_open()) {
            file << data << std::endl;
        }
    }

private:
    std::ofstream file;
};

int main() {
    try {
        FileHandler fh("example.txt");
        fh.write("Hello, RAII!");
        // No need to explicitly close the file
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}



/*

class FileHandler {
public:
    // Constructor: Opens the file when the FileHandler object is created.
    FileHandler(const std::string& filename) {
        file.open(filename);  // Try opening the file with the given filename.
        if (!file.is_open()) {
            throw std::runtime_error("Cannot open file.");  // Throw an exception if the file cannot be opened.
        }
        std::cout << "File opened: " << filename << std::endl;
    }

    // Destructor: Automatically closes the file when the FileHandler object goes out of scope.
    ~FileHandler() {
        if (file.is_open()) {  // Check if the file is still open.
            file.close();  // Close the file.
            std::cout << "File closed." << std::endl;
        }
    }

    // Write function: Writes data to the file if the file is open.
    void write(const std::string& data) {
        if (file.is_open()) {  // Check if the file is open before writing.
            file << data << std::endl;  // Write the data to the file followed by a newline.
        }
    }

private:
    std::ofstream file;  // File stream used for writing to the file.
};

int main() {
    try {
        // Create a FileHandler object, which opens the file.
        FileHandler fh("example.txt");
        fh.write("Hello, RAII!");  // Write data to the file.
        // No need to explicitly close the file, as the destructor handles it automatically.
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;  // Catch and display any exceptions (like failure to open the file).
    }
    return 0;  // Program ends, and the file will be automatically closed when fh goes out of scope.
}


*/