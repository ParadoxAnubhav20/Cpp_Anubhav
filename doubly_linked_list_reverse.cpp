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
        cout<<temp->data<<" ";
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
};
void reverseDll(Node* &head, Node* &tail) {
    Node* currPtr = head;  // Pointer to traverse the doubly linked list
    // Reverse the links for each node in the doubly linked list
    while (currPtr != nullptr) {
        Node* nextPtr = currPtr->next;  // Pointer to store the next node
        currPtr->next = currPtr->prev;  // Reverse the next pointer to the previous node
        currPtr->prev = nextPtr;  // Reverse the prev pointer to the next node
        currPtr = nextPtr;  // Move to the next node
    }
    // Swap the head and tail pointers to reflect the reversed order
    Node* newHead = tail;  // Store the original tail as the new head
    tail = head;  // Update the tail to the original head
    head = newHead;  // Update the head to the reversed list's new head
}
int main(){
    doublyLinkedList* dll=new doublyLinkedList();
    dll->insertatend(5);
    dll->insertatend(7);
    dll->insertatend(10);
    dll->insertionatstart(15);
    dll->display();
    reverseDll(dll->head,dll->tail);
    dll->display();
    return 0;
}
