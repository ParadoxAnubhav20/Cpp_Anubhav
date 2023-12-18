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
void deleteEqualNeighbors(Node* &head,Node* &tail){
    Node* currNode=tail->prev; //second last node
    while(currNode!=head){
        Node* prevNode=currNode->prev;
        Node* nextNode=currNode->next;
        if(prevNode->data==nextNode->data){
            prevNode->next=nextNode;
            nextNode->prev=prevNode;
            Node* nodetoDelete=currNode;
            delete currNode;
        }
        currNode=currNode->prev;
    }
}
int main(){
    doublyLinkedList* dll=new doublyLinkedList();
    dll->insertatend(2);
    dll->insertatend(1);
    dll->insertatend(2);
    dll->insertatend(1);
    dll->insertatend(2);
    dll->display();
    deleteEqualNeighbors(dll->head,dll->tail);
    dll->display();
    delete dll;
    return 0;
}
