#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    person(){
        cout << "Main constructor is called" << endl;
    }
    ~person(){
        cout << "Main destructor is called" << endl;
    }
};

class student : private person{
    public:
    student(){
        cout << "Derived constructor is called" << endl;
    }
    ~student(){
        cout << "Derived destructor is called" << endl;
    }
};

int main(){
    person *prsn = new person;
    delete prsn;
    student stu;
    return 0;
}