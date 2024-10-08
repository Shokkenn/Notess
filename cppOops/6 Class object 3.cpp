#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    int prsnage;
    void getage();
    void setage(int age){
        prsnage = age;
    }
};

void person :: getage(){
    cout << prsnage;
}
int main(){
    person prsn;
    int age;
    cin >> age;
    prsn.setage(age);
    prsn.getage();
    return 0;
}