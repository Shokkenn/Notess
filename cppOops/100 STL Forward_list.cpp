#include<iostream>
#include<string>
#include<algorithm>
#include<forward_list>
using namespace std;

int main() 
{
    // Declare a forward_list of integers. 
    // Note: forward_list does not support size initialization directly.
    forward_list<int> list; 
    
    // Insert elements into the forward_list using push_front.
    // push_front adds elements to the front of the list.
    list.push_front(1); // List becomes: 1
    list.push_front(2); // List becomes: 2 -> 1
    list.push_front(3); // List becomes: 3 -> 2 -> 1
    list.push_front(4); // List becomes: 4 -> 3 -> 2 -> 1
    
    // Traverse and print the elements of the forward_list.
    // Note: forward_list does not support indexing (like fl[i]) because it's a singly linked list.
    // Therefore, we use a range-based for loop to access each element.
    for(const int &value : list)
        cout << value << " "; // Output: 4 3 2 1 
    
    return 0;
}
