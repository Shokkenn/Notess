#include<iostream>
using namespace std;
int main(){
    char ch;
    int cnt = 0;
    cout << "Enter input" << endl;
    // cin.get(ch) reads a single character from the input, including spaces, and stores it in the variable ch.
    cin.get(ch);
    // The loop runs as long as the input character ch is not a newline (\n). This means the loop will continue reading input one character at a time until the user presses the Enter key.

    while(ch != '\n'){
        cout << ch << endl;
        cnt++;
        cin.get(ch);
    }
    cout << "Number of characters: " << endl;
    return 0;
}

/*
Example walkthrough:
User Input : Hello World

cin.get(ch) reads H, the the loop prints H and increment cnt by 1
Next, it reads e, prints e, and increments cnt by 1, and so on for all characters, including spaces.
When the user presses Enter, the input ends with a newline (\n), which terminates the loop.

Sample Output :
Enter input
H
e
l
l
o

W
o
r
l
d
Number of characters: 11
*/