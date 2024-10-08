#include<iostream>
#include<string>
using namespace std;

class person{
    protected:
    int age;
    public:
    person(int prsnage){
        age = prsnage;
    }
};

class student : private person{
    public:
    student(int a) : person(a){
        cout << "Base class constructor is calles\n";
    }
    void display(){
        cout << age << endl;
    }

};
int main(){
    student stu(22);
    stu.display();
    return 0;
}