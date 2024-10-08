#include<iostream>
#include<string>
using namespace std;

class person{
    int age;
    string name;
    public:
    person(){
        cout << "Constructor is called." << endl;
        age = 0;
        name = "Null";
    }

    void setdata(int prsnage, string str){
         age = prsnage;
         name = str;
    }
    void getdata(){
        cout << name << endl << age;
    }
};
int main(){
    person prsn;
    prsn.setdata(18, "Kajal");
    prsn.getdata();
    return 0;
}