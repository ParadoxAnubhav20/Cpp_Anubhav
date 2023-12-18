#include<iostream>
using namespace std;
// Node class represents a single node in the linked list
class Node{
    public:
    int data;
    Node* next;
    // Constructor to initialize the node with data and next pointer
    Node(int d){
        data = d;
        next = nullptr;
    }
};
// Queue class represents a queue implemented using linked list
class Queue{
    private:
    Node* head; // Pointer to the first node (head) of the queue
    Node* tail; // Pointer to the last node (tail) of the queue
    int size;   // Number of elements in the queue
    public:
    Queue(){
        head = nullptr; // Initialize head as null
        tail = nullptr; // Initialize tail as null
        size = 0;       // Initialize size as 0
    }
    // Function to add an element to the end of the queue
    void enqueue(int data){
        Node* newNode = new Node(data); // Create a new node with the given data
        if(head == nullptr){ // If the queue is empty
            head = tail = newNode; // Set both head and tail to the new node
        }
        else{
            tail->next = newNode; // Set the next pointer of tail to the new node
            tail = newNode; // Update the tail to the new node
        }
        size++; // Increase the size of the queue
    }
    // Function to remove an element from the front of the queue
    void dequeue(){
        if(head == nullptr){ // If the queue is empty
            return; // Simply return
        }
        else{
            Node* oldHead = head; // Store the current head in a temporary pointer
            Node* newHead = head->next; // Move the head pointer to the next node
            head = newHead; // Update the head to the new head
            if(head == nullptr){ // If the queue becomes empty
                tail = nullptr; // Update the tail to null as well
            }
            oldHead->next = nullptr; // Disconnect the old head from the queue
            delete oldHead; // Delete the old head node from memory
            size--; // Decrease the size of the queue
        }
    }
    // Function to get the size of the queue
    int getSize(){
        return size;
    }
    // Function to check if the queue is empty
    bool isEmpty(){
        return head == nullptr;
    }
    // Function to get the element at the front of the queue
    int front(){
        if(head == nullptr) 
            return -1; // Return -1 if the queue is empty
        return head->data; // Return the data of the head node
    }
};
int main(){
    Queue q1; // Create a queue object
    // Enqueue some elements into the queue
    q1.enqueue(10);
    q1.enqueue(15);
    q1.enqueue(20);
    q1.enqueue(25);
    q1.enqueue(30);
    q1.dequeue(); // Dequeue an element from the front of the queue
    while(!q1.isEmpty()){ // Print elements until the queue becomes empty
        cout << q1.front() << " ";
        q1.dequeue();
    }
    cout << endl;
    return 0;
}
