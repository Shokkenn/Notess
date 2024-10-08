#include<iostream>
#include<string>
using namespace std;

void display(){
    static int val = 0;    
    cout << val++ << endl;

    //cout << val << endl;
    // val++;
}
int main(){
    for(int i=0; i<10; i++){
        display();
    }
    return 0;
}

/*
When variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call.
*/