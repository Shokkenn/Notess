#include<iostream>
#include<string>
using namespace std;

class person{
    int age;
    string name;
    public:
           person(int val, string str){
            age = val;
            name = str;
           }
           friend void display(person);
};

void display(person prsn){
    cout << prsn.age << prsn.name << endl;
    ////private members and methods are available if friend
}
int main(){
    person prsn(20, "Kajal"), prsn1(20, "Moni");
    display(prsn);
    display(prsn1);
    return 0;
}

/*
A friend function is a special function in C++ that in spite of not being a member function of a class has the privilege to access the private and protected data of a class.

*/