#include<iostream>
#include<string>
using namespace std;

class person{
    protected:    // Protected access modifier allows derived classes to access these members
    int age;
    string name;
    public:
    void setdata(string stuname, int stuage){
        name = stuname;
        age = stuage;
    }
};

class student : public person{
    int rollNo;
    public:
    void setid(int id){
        rollNo = id;
    }

    void display(){
        cout << name << endl << age << endl << rollNo << endl;
    }
};

int main(){
    student stu;
    stu.setdata("Moni", 20);
    stu.setid(200);
    stu.display();
    return 0;
}


/*
output :
Moni 
20
200
*/