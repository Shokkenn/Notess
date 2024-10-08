#include<iostream>
#include<string>
using namespace std;

class person{
    char name[20];
    //string name;
    int rollNo;
    public:
    void getdata();
    void display(){
        cout << name << endl << rollNo;
    }
};

void person :: getdata(){    //scope resolution operator

    //Scope Resolution Operator (::) is used to define a member function of a class outside the class definition.
    
    gets(name);  //not cin>>name; in case of sentense including " ".
    // cin.getline(name, 20)
    // safer option for names including spaces
     // The gets() function is deprecated in modern C++ and has been removed from the C++ standard library because it poses a security risk (it doesn’t check buffer overflow).
    cin >> rollNo;
}
int main(){
    person prsn;
    prsn.getdata();
    prsn.display();
    return 0;
}