#include<iostream>
#include<string>
using namespace std;

class person{
    public:
       void introduction(){
        cout << "Hey! I'm there.\n";
       }
};

class student : public person{
    public:
    void introduction(){
        cout << "I'm student" << endl;
    }
};
int main(){
    student stu;
    stu.introduction();
    stu.person :: introduction();
    return 0;
}