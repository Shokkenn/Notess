#include<iostream>
#include<string>
using namespace std;
class person{
    int x;
    public:
    person(int per = 0){
        x = per;  // Initializes x with a default value of 0 or the value provided.
    }
    void introduction(){
        cout << "I'm Here " << x << endl;
    }
};
// The class student is derived from person using public inheritance
class student : public person{
    int p;
    public:
    student(int st = 0){
        p = st;
    }
    // Overridden Member Function
    // This overrides the introduction function from the base class but only for objects of student
    void introduction(){
        cout << "I'm here " << p << endl;
    }
};

void fun(person &stud){
    stud.introduction();
};
int main(){
    student stu(22);
    stu.introduction();
    fun(stu);
    return 0;
}

/*
Output:
I'm here 22
I'm here 0
*/