#include<iostream> 
using namespace std;

class fun{
    int x,y,z;
    public:
    fun(int a=0, int b=0, int c=0){
        x = a;
        y = b;
        z = c;
    }
    // Friend Function for Operator Overloading
    // The unary minus (-) operator is overloaded using a friend function. This means the function is not a member of the class but has access to its private members.
    friend void operator-(fun &);

    void display(){
        cout << x << endl << y << endl << z << endl;
    }
};

void operator-(fun &p){
    p.x = -p.x;
    p.y = -p.y;
    p.z = -p.z;
}

int main(){
    fun arr(12, 30, 40);
    arr.display();
    -arr;
    arr.display();
    return 0;
}

/*
Output :
12
30
40
-12
-30
-40


Friend Function:
The friend function operator-() allows direct access to the private members of fun and negates their values.

Operator Overloading:
By overloading the unary minus operator (-), we can use -arr to change the sign of the values within the arr object.
*/