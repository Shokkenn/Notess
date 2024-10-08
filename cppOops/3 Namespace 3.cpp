#include<iostream>
#include<string>
using namespace std;
namespace{
    int x = 10;
    namespace{
        void display(){
            cout << x;
        }
    }
    namespace two{
        int x = 200;
    }
}

int main(){
    display();
    cout << x << two :: x;

    return 0;
}

/*

10200
Explanation:
Anonymous Namespaces:

In this code, there are two anonymous (unnamed) namespaces. By default, everything inside an anonymous namespace has internal linkage, meaning the variables and functions inside are only visible within the translation unit (file). However, anonymous namespaces behave similarly to named ones in terms of scoping.
display() function:

When you call display(), it accesses x from the outer anonymous namespace.
x = 10 is in the outer anonymous namespace, so display() prints 10.
cout << x << two::x:

x refers to the x = 10 in the outer anonymous namespace (since there are no conflicting x variables in other scopes).
two::x refers to the x = 200 declared in the two namespace.
Thus, the sequence of printing results in 10 from display(), then 10 from the outer anonymous namespace, and 200 from two::x, making the full output:

*/