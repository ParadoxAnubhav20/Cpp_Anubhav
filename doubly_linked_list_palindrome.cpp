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
bool checkPalindrome(Node* &head, Node* &tail) {
    Node* start = head;
    Node* end = tail;
    while (start != end && end->next != start) {
        if (start->data != end->data) {
            return false;
        }
        start = start->next;
        end = end->prev;
    }
    return true;
}
int main(){
    doublyLinkedList* dll=new doublyLinkedList();
    dll->insertatend(5);
    dll->insertatend(7);
    dll->insertatend(10);
    dll->insertatend(7);
    dll->insertatend(5);
    dll->display();
    cout<<(checkPalindrome(dll->head,dll->tail)?"Palindrome":"Not Palindrome");
    delete dll;
    return 0;
}
