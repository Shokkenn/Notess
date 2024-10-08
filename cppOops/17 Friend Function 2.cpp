#include<iostream>
#include<string>
using namespace std;
class football;
class cricket{
    int age;
    public:
       cricket(int x){
        age = x;
       }
       friend void display(cricket, football);
};

class football{
    int age;
    public:
        football(int x){
            age = x;
        }
        friend void display(cricket, football);
};

void display(cricket fun1, football fuc2){
    cout << fun1.age << endl << fuc2.age << endl;
}
int main(){
    cricket cri(20);
    football ftbal(20);
    display(cri, ftbal);
    return 0;
}


/*

// Forward declaration of class football
class football;

class cricket {
    int age;  // Private member variable to hold the age
    public:
       // Constructor to initialize age
       cricket(int x) {
           age = x;  // Assign the input parameter x to the private member age
       }

       // Friend function declaration allowing display function to access private members
       friend void display(cricket, football);
};

// Class definition for football
class football {
    int age;  // Private member variable to hold the age
    public:
        // Constructor to initialize age
        football(int x) {
            age = x;  // Assign the input parameter x to the private member age
        }

        // Friend function declaration allowing display function to access private members
        friend void display(cricket, football);
};

// Definition of the friend function display
void display(cricket fun1, football fuc2) {
    // Access and print the age of the cricket and football objects
    cout << fun1.age << endl;  // Print the age of the cricket object
    cout << fuc2.age << endl;   // Print the age of the football object
}

int main() {
    // Create an object of class cricket with age 20
    cricket cri(20);
    // Create an object of class football with age 20
    football ftbal(20);
    // Call the display function to print the ages
    display(cri, ftbal);
    return 0;  // Indicate that the program ended successfully
}


*/