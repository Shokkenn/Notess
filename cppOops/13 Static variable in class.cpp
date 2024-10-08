#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    static int age; 
};
int person :: age = 20;

int main(){
    cout << person :: age << endl;  //20
    person :: age = 30;
    cout << person :: age << endl; //30
    person prsn;
    prsn.age = 40;
    cout << prsn.age << endl;   //40
    cout << person :: age;     // 40
    return 0;
}

//O/P : 20 30 40 40



/*
// Define a class named 'person'
class person {
    public:
    static int age;  // Declaration of a static member variable 'age'
};

// Define and initialize the static variable 'age' outside the class
int person::age = 20;  // 'person::age' means the 'age' variable belongs to the 'person' class

int main(){
    // 1st Output: Print the initial value of the static variable 'age'
    cout << person::age << endl;  // Access the static variable via the class name 'person::age'
    // Output: 20

    // Change the value of the static variable 'age' to 30
    person::age = 30;  // Access and modify the static variable using the class name

    // 2nd Output: Print the modified value of the static variable 'age'
    cout << person::age << endl;  // Access the static variable again to see the change
    // Output: 30

    // Create an instance of the 'person' class
    person prsn;

    // Access and modify the static variable 'age' through the instance 'prsn'
    prsn.age = 40;  // Though it's a static variable, it can still be accessed via an instance

    // 3rd Output: Print the value of 'age' accessed through the object 'prsn'
    cout << prsn.age << endl;
    // Output: 40

    // 4th Output: Print the value of 'age' accessed through the class again
    cout << person::age << endl;  // The value remains 40 because it's static and shared across all instances
    // Output: 40

    return 0;  
}


Static members, are shared by all instances of the class, and their memory is allocated only once, regardless of how many objects of the class are created. They exist at the class level, not at the instance level.

When you declare a static member in a class, you're only specifying that it exists, but you're not yet allocating memory for it. Memory for static members is only allocated once, and that happens outside the class.

This is why you need to define the static member variable outside the class and initialize it there.
You can declare static members inside a class but cannot assign them values directly inside the class because they require external memory allocation.
To initialize static members, you need to define and initialize them outside the class.

*/