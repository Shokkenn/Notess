#include <iostream>
#include <string>
using namespace std;

class person {
    char name[30];  // Increased buffer size for name
    int id;
public:
    void getdata();
    void display() {
        cout << name << endl << id << endl;
    }
    // Overloading the arrow operator
    person *operator->() {
        // Returning a pointer to the object itself
        return this;
    }
};

void person :: getdata() {
    cin.getline(name, sizeof(name));  // Replaced unsafe gets with getline
    cin >> id;
    cin.ignore();  // To ignore the newline character after reading id
}

int main() {
    person prsn;
    cout << "Enter name: ";
    prsn.getdata();
    prsn.display();   // Access using dot operator
    prsn->display();  // Access using overloaded arrow operator
    return 0;
}
