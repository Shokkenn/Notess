#include<iostream>
#include<cstring>
using namespace std;


class person{
    public:
    virtual void display(){
        cout << "Base Display" << endl;
    }

    void show(){
        cout << "Base show" << endl;
    }
};

class student : public person{
    public:
    void show(){
        cout << "Derived show" << endl;
    }

    void display(){
        cout << "derived display" << endl;
    }
};
int main(){
    person *ptr;
    person prsn;
    student stu;
    ptr = &prsn;
    ptr->display();
    ptr->show();
    cout << endl;

    ptr = &stu;
    ptr->display();
    ptr->show();
    return 0;
}