// Example-2: Using std::shared_ptr:

#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(int value) : data(value) {
        std::cout << "MyClass constructed with data = " << data << std::endl;
    }

    ~MyClass() {
        std::cout << "MyClass with data = " << data << " destructed" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << data << std::endl;
    }

private:
    int data;
};

void sharedPtrExample() {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>(200);
    {
        std::shared_ptr<MyClass> ptr2 = ptr1; // Shared ownership
        ptr2->display();
        std::cout << "Reference count: " << ptr1.use_count() << std::endl;
    } // ptr2 goes out of scope

    std::cout << "Reference count after ptr2 is destroyed: " << ptr1.use_count() << std::endl;
    ptr1->display();
} // ptr1 goes out of scope, and the MyClass instance is deleted

int main() {
    sharedPtrExample();
    return 0;
}



/*
Output:


MyClass constructed with data = 200
Data: 200
Reference count: 2
Reference count after ptr2 is destroyed: 1
Data: 200
MyClass with data = 200 destructed

*/



/*

#include <iostream>
#include <memory> // For std::shared_ptr

class MyClass {
public:
    // Constructor to initialize the MyClass object with an integer value
    MyClass(int value) : data(value) {
        std::cout << "MyClass constructed with data = " << data << std::endl;
    }

    // Destructor that gets called when the object is deleted
    ~MyClass() {
        std::cout << "MyClass with data = " << data << " destructed" << std::endl;
    }

    // Method to display the value of the 'data' member
    void display() const {
        std::cout << "Data: " << data << std::endl;
    }

private:
    int data; // A private member to store an integer value
};

// Function to demonstrate the behavior of shared_ptr
void sharedPtrExample() {
    // Create a shared_ptr that manages a MyClass object with the value 200
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>(200);
    
    {
        // Create another shared_ptr, ptr2, that shares ownership of the same MyClass object
        std::shared_ptr<MyClass> ptr2 = ptr1; // Shared ownership
        // Call the display() method on the MyClass object
        ptr2->display();
        // Display the reference count (number of shared_ptr objects owning the MyClass instance)
        std::cout << "Reference count: " << ptr1.use_count() << std::endl;
    } // ptr2 goes out of scope here, and its reference to the MyClass object is destroyed

    // After ptr2 is destroyed, ptr1 is still pointing to the MyClass object, so the reference count decreases
    std::cout << "Reference count after ptr2 is destroyed: " << ptr1.use_count() << std::endl;
    // Call the display() method again to confirm ptr1 is still valid
    ptr1->display();
} // ptr1 goes out of scope here, so the MyClass object is destroyed since there are no more references to it

int main() {
    sharedPtrExample(); // Call the function to demonstrate the shared_ptr behavior
    return 0;
}

*/