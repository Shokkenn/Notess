#include<iostream>
#include<string>
#include<algorithm>
#include<stack>   // Include stack container
#include<queue>   // Include queue container
using namespace std;

int main() 
{
    // Stack declaration
    // By default, stack uses deque as its underlying container (stack<int, deque<int>>),
    // but we can also use stack<int, vector<int>> or stack<int, list<int>>.
    stack<int> stk; 
    
    // Push elements onto the stack
    stk.push(100); // Stack: [100]
    stk.push(200); // Stack: [200, 100]
    stk.push(300); // Stack: [300, 200, 100]
    
    // Display and pop the elements in a Last-In-First-Out (LIFO) order.
    cout << "Stack (LIFO) : ";
    while(!stk.empty())
    {
        // Access the top element of the stack
        cout << stk.top() << " ";  // Outputs 300 200 100
        // Remove the top element
        stk.pop();
    }
    
    cout << endl << endl;
    
    // Queue declaration
    // Queue by default uses deque as its underlying container (vector cannot be used
    // because it does not support front access). List or deque can be used.
    queue<int> que; 
    
    // Push elements onto the queue
    que.push(100); // Queue: [100]
    que.push(200); // Queue: [100, 200]
    que.push(300); // Queue: [100, 200, 300]
    
    // Display the front and back of the queue (FIFO order).
    cout << "Queue :" << endl;
    while(!que.empty())
    {
        // Access the front and back elements of the queue
        cout << "Front : " << que.front() << " Back : " << que.back() << endl;
        // Remove the front element
        que.pop();
    }
    
    cout << endl;
    
    // Priority Queue declaration
    // By default, priority_queue is a max-heap, meaning it prioritizes the highest value.
    priority_queue<int> pq;
    
    // Push elements onto the priority queue
    pq.push(300); // Priority Queue: [300]
    pq.push(100); // Priority Queue: [300, 100]
    pq.push(200); // Priority Queue: [300, 100, 200]
    
    // Display and pop the elements of the priority queue.
    cout << "Priority Queue : ";
    while(!pq.empty())
    {
        // Access the top element (the largest element)
        cout << pq.top() << " ";  // Outputs 300 200 100
        // Remove the top element
        pq.pop();
    }
    
    // Example of how to create a priority queue using std::less (not needed, commented out).
    /*
    priority_queue<int, vector<int>, std::less<int>> cpque;
    cpque.push(300);
    cpque.push(100);
    cpque.push(200);
    
    cout << "Priority Queue : ";
    while(!cpque.empty())
    {
        cout << cpque.top() << " "; 
        cpque.pop();
    }
    */
    
    return 0;
}


/*
OutPut:

Stack (LIFO) : 300 200 100 

Queue :
Front : 100 Back : 300
Front : 200 Back : 300
Front : 300 Back : 300

Priority Queue : 300 200 100

*/
