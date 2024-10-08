#include<iostream>
#include<string>
using namespace std;

class person{
    protected:
    int age;
    string name;
    public:
    void setdata(string prsnname, int prsnage){
        name = prsnname;
        age = prsnage;
    }
};

class student : private person{
    int id;
    public:
    person :: setdata;
    void setid(int rollNo){
        id = rollNo;
    }
    void display(){
        cout << name << endl << age << endl << id << endl;
    }
};
int main(){
    student stu;
    stu.setdata("Kajal", 20);
    stu.setid(200);
    stu.display();
    return 0;
}