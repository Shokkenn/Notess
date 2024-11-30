#include<iostream>
#include<algorithm>
#include<deque> // Include the deque container library
using namespace std;

int main() 
{
    // Declare a deque of integers with size 5.
    // A deque (double-ended queue) allows insertion and deletion at both front and back.
    deque<int> d(5); 
    
    // Assign values to the deque using indexing.
    // Deques allow random access like vectors.
    for(int i = 0; i < 5; i++)
        d[i] = i + 1; // Initialize deque with values 1, 2, 3, 4, 5
    
    // Add an element to the back of the deque.
    d.push_back(0);  // Now deque is: 1 2 3 4 5 0
    
    // Add an element to the front of the deque.
    d.push_front(10); // Now deque is: 10 1 2 3 4 5 0
    
    // Print the elements of the deque.
    // Deques allow access via indices, so you can use indexing like an array.
    for(int i = 0; i < 7; i++)
        cout << d[i] << " "; // Output: 10 1 2 3 4 5 0 
    
    return 0;
}

//Deque Declaration: Describes the nature of a deque, explaining that it's a double-ended queue and allows access from both ends.