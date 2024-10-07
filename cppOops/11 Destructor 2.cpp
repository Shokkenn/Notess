#include<iostream>
#include<string>
using namespace std;

class person{
    int *age;          // Pointer to dynamically allocate memory for 'age'
    string *name;      // Pointer to dynamically allocate memory for 'name'
    
    public:
    // Constructor: Initializes the 'age' and 'name' using dynamic memory allocation
    person(int page, string pname)
    {
        cout <<"Constructor is called"<<endl;
        name = new string;   // Allocating memory for the name dynamically
        age = new int;       // Allocating memory for the age dynamically
    
        *name = pname;       // Storing the passed name in the dynamically allocated memory
        *age = page;         // Storing the passed age in the dynamically allocated memory
    }

    // Member function to display the values of name and age
    void display(){
        cout << *name << endl << *age << endl;  // Dereferencing the pointers to access their values
    }

    // Destructor: Releases the dynamically allocated memory when the object is destroyed
    ~person(){
        cout << "Destructor is Called" << endl;
        delete name;  // Deallocating the memory allocated for 'name'
        delete age;   // Deallocating the memory allocated for 'age'
    }
};

int main(){
    person *p1 = new person(22, "Sonu");  // Dynamically creating a 'person' object with age 22 and name "Sonu"
    p1->display();                        // Calling the display function to show the values
    delete p1;                            // Explicitly deleting the dynamically allocated object, which will invoke the destructor
    return 0;
}


/*

Breakdown of Code:
Class Definition:

The class person has two data members: age and name, both of which are pointers. This means the class dynamically allocates memory for these members when an object is created.
Constructor:

The constructor person(int page, string pname) is called when an object of the class is created.
It allocates memory for name and age using the new keyword.
The constructor also assigns the passed values pname and page to the dynamically allocated memory.
A message "Constructor is called" is printed to indicate that the constructor has been executed.
display() Method:

This function prints the values stored in the name and age variables by dereferencing the pointers.
Destructor:

The destructor ~person() is called when an object is destroyed. It deallocates the dynamically allocated memory for name and age using delete.
The message "Destructor is Called" is printed when the destructor is executed.
In main() Function:

A person object p1 is dynamically created using the new keyword with age 22 and name "Sonu".
The display() function is called to print the name and age.
delete p1 is used to deallocate the memory for the p1 object, which automatically calls the destructor.
Dynamic Memory:
In this code, dynamic memory allocation is used to allocate memory for name and age to ensure that the values are stored on the heap and remain accessible even after the constructor scope ends.






*/