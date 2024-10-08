#include<iostream>
#include<string>
using namespace std;

int cnt = 0;
class person{
    public:
       person(){  //Constructor is called whenever a new object of the class is created.
        cout << "Constructor is called." <<  ++cnt << endl;
       }
       ~person(){
        cout << "Destructor is called." << cnt-- << endl;
       }
};
int main(){
    person *prsn1 = new person;  // Two dynamic objects are created using the new keyword which calls the constructor
    person *prsn2 = new person;
    delete prsn2;
    return 0;
}

/*
This code demonstrates the creation and deletion of objects dynamically using pointers, and tracks the numbers of objects created with a counter cnt.


*/