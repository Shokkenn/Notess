#include<iostream>
#include<string>
using namespace std;

class person{
    int age;
    string name;
    public:
    person(int prsnage=0, string str = "Null"){
        cout << "Constructor is called." << endl;
        age = prsnage;
        name = str;
    }

    void getdata(){
        cout << name << endl << age;
    }
};

int main(){
    person prsn;
    prsn.getdata();
    return 0;
}