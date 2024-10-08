#include<iostream>
#include<string>
using namespace std;

namespace one{
    int x = 10;
    namespace two {
        int x = 20;
        void display(){
            cout << x;
        }
    }
}
int main(){

    one :: two :: display();
    cout << one :: x;
    return 0;
}



/*

2010
Explanation:
one::two::display():

Inside the display() function, x refers to one::two::x, which is 20.
So, cout << x; will print 20.
cout << one::x;:

This refers to one::x, which is 10.
So, cout << one::x; will print 10.
Thus, the final output is 2010.

*/