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

    void operator-();  // Overloading the Unary Minus Operator
    void display(){
        cout << x << endl << y << endl << z << endl;
    }
};

void fun :: operator-(){
    // This method changes the signs of the vector components.
    x = -x;
    y = -y;
    z = -z;
}
int main(){
    fun arr(11, 12, 15);
    arr.display();
    -arr; //Unary Minus Operation
    arr.display();
    return 0;
}


/*
Output:
11
12
15
-11
-12
-15
*/


/*
Parameterized Constructor with Default Values:
Parameters a, b, and c: These represent the values that you want to assign to the x, y, and z components of the vector.

Default Values (a=0, b=0, c=0): This means that if no values are passed when the constructor is called, the variables x, y, and z will be initialized to 0 by default.

Why ??
The constructor is responsible for initializing the member variables with the values provided by the user or with default values if no arguments are passed.

*/