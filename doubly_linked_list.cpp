#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int v){
        data=v;
        next=nullptr;
        prev=nullptr;
    }
};
class doublyLinkedList{
    public:
    Node* head;
    Node* tail;
    doublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insertionatstart(int val) {
    Node* new_node = new Node(val);
    if (head == nullptr) {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}
void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }cout<<endl;
}
void insertatend(int val){
    Node* new_node=new Node(val);
    if(tail==NULL){
        head=new_node;
        tail=new_node;
        return;
    }
    tail->next=new_node;
    new_node->prev=tail;
    tail=new_node;
    return;
}
void insertatpos(int val, int pos) {
    Node* temp = head; // Start from the head of the list
    int count = 1; // Counter to track the current position
    // Traverse the list until the desired position - 1
    while (count < (pos - 1)) {
        temp = temp->next; // Move to the next node
        count++;
    }
    Node* new_node = new Node(val); // Create a new node with the given value
    // Insert the new node at the desired position
    new_node->next = temp->next; // Set the next pointer of the new node to the next node of the current position
    temp->next = new_node; // Set the next pointer of the current position to the new node
    new_node->prev = temp; // Set the previous pointer of the new node to the current position
    new_node->next->prev = new_node; // Update the previous pointer of the next node to the new node
    return;
}
void deleteAtStart() {
    if (head == nullptr) return;
    Node* temp = head;
    head = head->next;
    if (head == nullptr) {
        // The list becomes empty
        tail = nullptr;
    } else {
        head->prev = nullptr;
    }
    
    delete temp;
}
void deleteAtEnd() {
    if (head == nullptr) return;
    Node* temp = tail;
    tail = tail->prev;
    if (tail == nullptr) {
        // The list becomes empty
        head = nullptr;
    } else {
        tail->next = nullptr;
    }
    delete temp;
}
void deleteAtPos(int k){
    Node* temp = head;
    int count = 1;
    while(count < k){
        temp = temp->next;  // Traverse to the kth node
        count++;
    }
    temp->prev->next = temp->next;  // Adjust the next pointer of the previous node
    temp->next->prev = temp->prev;  // Adjust the previous pointer of the next node
    delete temp;  // Delete the kth node
}
};
int main(){
    doublyLinkedList dll;
    dll.insertionatstart(5);
    dll.insertionatstart(3);
    dll.insertionatstart(9);
    dll.display();
    dll.insertatend(2);
    dll.insertatend(10);
    dll.insertatend(150);
    dll.display();
    dll.insertatpos(69,3);
    dll.display();
    dll.deleteAtStart();
    dll.display();
    dll.insertionatstart(11);
    dll.deleteAtEnd();
    dll.display();
    dll.deleteAtPos(3);
    dll.display();
    return 0;
}