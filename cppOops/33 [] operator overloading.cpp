//operator overloading by overloading the subscript operator ([])
#include<iostream> 
using namespace std;
class section{
    int arr[3];
    public:
    
    section(int a, int b, int c){
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
    }
    // //The subscript operator [] is overloaded to allow objects of the section class to use array-like indexing to access the elements of arr. It takes an integer a as the index and returns the element at that position in the arr array.
    int operator[](int a){
        return arr[a];
    }
};
int main(){
    section a(1,2,3);
    cout << a[2];
    return 0;
}

/*
Operator Overloading:
The operator[] function allows the section class to behave like an array when accessing elements with square brackets ([]).

Indexing:
The expression a[2] calls the overloaded operator[] function, which returns arr[2], i.e., 3, and prints it.

This implementation only allows read access to the array elements. If you wanted to enable write access (i.e., modifying the array elements), you could return a reference from operator[].
*/