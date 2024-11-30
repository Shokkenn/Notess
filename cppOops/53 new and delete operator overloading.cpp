
#include<iostream>
#include<string>
#include<stdexcept>
#include<cstdlib>
using namespace std;

// A simple class named student
class student{
    int age;          // private data member to store age of the student
    string name;      // private data member to store name of the student

public:
    // Constructor to initialize student object with age and name
    student(int age, string name){
        this->age = age;   // 'this' pointer refers to the current object
        this->name = name;
    }

    // Function to display the student details
    void display(){
        cout << age << "  " << name << endl;
    }

    // Overloading the 'new' operator to allocate memory
    void *operator new(size_t sz){
        void* ptr;
        cout << "New is Overloaded" << endl;  // Message indicating new operator is overloaded
        ptr = malloc(sz);                     // Using malloc to allocate memory
        if(!ptr){                             // If memory allocation fails
            bad_alloc al;                     // Create a bad_alloc object
            throw al;                         // Throw the exception
        }
        return ptr;                           // Return the allocated memory pointer
    }

    // Overloading the 'delete' operator to deallocate memory
    void operator delete(void* ptr){
        cout << "delete is overloaded" << endl;  // Message indicating delete operator is overloaded
        free(ptr);                               // Using free to deallocate memory
    }
};

// Main function
int main(){
    student* stu;     // Declare a pointer of type student

    try{
        // Allocate memory for a student object using overloaded new operator
        stu = new student(26, "Kajal");

        // Call the display method to print student details
        stu->display();

        // Deallocate memory using overloaded delete operator
        delete stu;
    }
    catch(bad_alloc b){
        // If a bad_alloc exception is thrown, catch it and display an error message
        cout << b.what() << endl;
    }

    return 0;   // Return 0 to indicate successful execution
}


// This C++ program demonstrates the overloading of the new and delete operators for dynamic memory allocation in a user-defined class

/*
Overloading new Operator:

The new operator is overloaded to allocate memory using malloc. When memory allocation fails, it throws a bad_alloc exception, which is caught in the main function.
The size of memory to allocate is passed as sz.
Overloading delete Operator:

The delete operator is overloaded to deallocate memory using free. This is crucial when overloading new because dynamic memory allocated by new must be deallocated appropriately.    

Exception Handling:

In the main function, the new operation is wrapped in a try-catch block to handle any memory allocation failure. If the allocation fails, the bad_alloc exception is caught and an appropriate error message is displayed.

Output:
New is Overloaded
26  Kajal
delete is overloaded

When the new operator is called, the overloaded version prints "New is Overloaded" and allocates memory.
The student object is created with age 26 and name "Kajal", and the display() function prints the details.
The delete operator is called, which prints "delete is overloaded" and frees the allocated memory.

*/