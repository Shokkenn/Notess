#include<iostream>
using namespace std;

int main(){
    int sz = 10;
    char ch[10];
    cout<<"Enter A using cin object and extraction operator\" >>\" :\n";
    cin >> ch;
    cout << ch;

    cout << "\nEnter A using getline :\n";
    // cin.getline(ch, sz); reads the entire line of input (up to 9 characters, since the last character is reserved for the null terminator) until a newline (\n) or the maximum size sz is reached.
    cin.getline(ch,sz);
    cin.getline(ch,sz);

    cout << ch;
    return 0;


    /*
    Input :
    Hello World
    World
    
    Output :
    Enter A using cin object and extraction operator" >>" :
    Hello
    Enter A using getline :
    World
    */

   /*
   The C++ getline() is an in-built function defined in the <string. h> header file that allows accepting and reading single and multiple line strings from the input stream. In C++, the cin object also allows input from the user, but not multi-word or multi-line input. That's where the getline() function comes in handy.
   */
}