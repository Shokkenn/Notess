#include<iostream>
#include<string>
using namespace std;

class person{
    int age;
    string name;
    public:
          person(){
            cout << "Default constructor is called." << endl;
            age = 0;
            name = "Null";
          }

          person(int prsnage){
            cout << "Int constructor is called." << endl;
            age = prsnage;
            name = "Null";
          }

          person(string str){
            cout << "String constructor is called." << endl;
            age = 0;
            name = str;
          }

          person(int prsnage, string str){
            cout << "Both constructor is called" << endl;
            age = prsnage;
            name = str;
          }

          void getdata(){
            cout << name << endl << age << endl << endl;
          }
};

int main(){
    person prsn, prsn2(20), prsn3("Kajal"), prsn4(20, "Moni");
    prsn.getdata();
    prsn2.getdata();
    prsn3.getdata();
    prsn4.getdata();
    return 0;
}