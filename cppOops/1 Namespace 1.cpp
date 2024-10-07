#include<iostream>
#include<string>
using namespace std;

namespace one{
    int x = 10;
    void display(){
        cout << x;
    }
}

namespace two{
    int x = 20;
    void display(){
        cout << x;
    }
}
int main(){
    one :: display();
    cout << two ::x;
    return 0;
}

/*
Namespace provide a method for preventing name conflicts in large projects.
Multiple namespace blocks with same name are allowed. All declarations within those blocks are declared in the named scope.

The best example of namespace scope is the C++ standard library(std) where all the classes, methods and templates are declared. Hence while writing C++ program we usually include the directive using namespace std.
*/