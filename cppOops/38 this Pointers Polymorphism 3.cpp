#include<iostream>
#include<cstring>
using namespace std;

class person{
    int age;
    char name[20];
    public:
    person(char*, int);
    person & greater(person &);
    void display(){
        cout << name << endl << age << endl << endl;
    }
};

person :: person(char *ch, int a){
    age = a;
    strcpy(name, ch);
}

person & person :: greater(person &a){
    if(a.age >= age)
    return a;
    else
    return *this;
}
int main(){
    person prsn("Kajal", 22), prsn1("Moni", 23), prsn2("Henu", 27);
    person men = prsn.greater(prsn1);
    person men1 = prsn.greater(prsn2);
    men.display();
    men1.display();
    return 0;
 }