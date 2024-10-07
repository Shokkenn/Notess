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


