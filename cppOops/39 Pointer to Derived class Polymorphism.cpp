#include<iostream>
#include<cstring>
using namespace std;


class person{
    public:
    int age;
    void display(){
        cout << age << endl << endl;
    }
};

class student : public person{
    public:
    int age1;
    void display(){
        cout << age1 << " " << this->age << " " << age << endl;
    }
};
int main(){
    person *ptr;
    person prsn;
    student stu;
    ptr = &prsn;
    ptr->age = 89;
    ptr->display();

    ptr = &stu;
    ptr->age = 91;
    ptr->display();

    ((student *)ptr)->age1 = 20;
    ((student *)ptr)->display();

    student *stud;
    stud = &stu;
    stud->age1 = 90;
    stud->age = 79;
    stud->display();
    return 0; 
}