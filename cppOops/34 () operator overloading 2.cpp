#include<iostream> 
using namespace std;

class arr{
    int vec[3];
    public:
    arr(int a, int b, int c){
        vec[0] = a;
        vec[1] = b;
        vec[2] = c;
    }
    // Overloading the [] operator
    // The operator[](int a) is overloaded to allow access to the elements of vec using array-style indexing.
    // When you use a[2], it returns the value stored at the index 2 of vec.
    int operator[](int a){
        return vec[a];
    }
    // Overloading the () operator
    // The operator()(int a, int b, int c) is overloaded to modify the values in vec by assigning new values to its three elements.
    // When you call a(3, 4, 5), the values of vec are updated to 3, 4, and 5 respectively.
    void operator()(int a, int b, int c){
        vec[0] = a;
        vec[1] = b;
        vec[2] = c;
    }
};
int main(){
    arr a(6,7,8);
    cout << a[2] << endl;
    a(3,4,5);
    cout << a[2];
    return 0;
}

/*
Output :
8
5


Operator overloading is a compile-time polymorphism. It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.

*/