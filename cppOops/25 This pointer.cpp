#include<iostream> 
using namespace std; 

class Fun{
    private:
    int x, y;
    public:
    Fun(int x = 0, int y = 0){
    //The constructor takes two integer arguments with default values of 0 and assigns them to the member variables x and y using the this pointer.

        this->x = x;
        this->y = y;
    }

    Fun & set1(int val){ // This method sets the value of x to val and returns the reference to the current object (*this), allowing method chaining.

        x = val;
        return *this;
    }

    Fun & set2(int val2){
    // This method sets the value of y to val2, but does not return anything, which is an issue for method chaining. Since set2 is used in a chain, it should return *this just like set1.    
        y = val2;
        return *this;
    }

    void print(){
        cout << "x = " << x << "y = " << y << endl;
    }
};

int main(){
    Fun obj(5,5);
    obj.print();
    obj.set1(20).set2(30);
    // set1(20) changes x to 20 and returns the object. Then, set2(30) is called to change y to 30, but since set2 does not return anything, this breaks the chaining.
    obj.print();
    return 0;
}


/*
Output :
x = 5 y = 5
x = 20 y = 30

“return *this” is going to return the current class object. And “return this” will return the object address of the current class.

To be simple first statement will return something like return a, where a is a variable which will have some value in it. And the second statement will return something like return &a, where &a is the address of the variable a where actually it is stored in memory. The same concept is applicable for the object of the class.

*/