#include<iostream>
#include<string>
using namespace std;

class person{ 
    public:
    string name;
    void introduction();

};

void person :: introduction(){
    cout << name << endl;
}
int main(){
    person prsn, *ptr1;
    prsn.name = "Kajal";
    ptr1 = new person();
    ptr1->name = "Kajal1";
    prsn.introduction();
    (*ptr1).introduction();
    delete ptr1;
    return 0;
}