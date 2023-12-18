#include<iostream>
#include<vector>
using namespace std;
class Queue{
    vector<int> v;
    int front;
    int back;
public:
    Queue(){
        front = -1;
        back = -1;
    }
    void enqueue(int data){
        v.push_back(data); // Add the element to the back of the vector
        if(front == -1) // If it is the first element being added
            front = 0; // Update the front index to 0
        back++; // Increment the back index
    }
    void dequeue(){
        if(isEmpty()){ // If the queue is empty
            cout << "Queue is empty." << endl;
            return;
        }
        front++; // Move the front index to the next element
        if(front > back){ // If front surpasses the back
            // Reset the queue indices to indicate an empty queue
            front = -1;
            back = -1;
        }
    }
    int getFront(){
        if(isEmpty()) // If the queue is empty
            return -1;
        
        return v[front]; // Return the element at the front index
    }
    bool isEmpty(){
        return front == -1;
    }
};
int main(){
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(15);
    q1.enqueue(20);
    q1.enqueue(25);
    q1.enqueue(30);
    q1.dequeue();
    q1.enqueue(100);
    while(!q1.isEmpty()){
        cout << q1.getFront() << " ";
        q1.dequeue();
    }
    cout << endl;
    return 0;
}
