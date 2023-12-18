#include<iostream>
using namespace std;
class Node{
     public:
    int data;
    Node* next;
   
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
//global functions
void insert_head(Node* &Head,int d){
        //create new node
        Node* temp=new Node(d);
        temp->next=Head;
        Head=temp;
    }
void insert_tail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
    //equivalent to
    //tail=temp;
}
    void print(Node* &Head){
        Node* temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }

int main(){
    //created a new node
Node* n=new Node(15);
//    cout<<n->data<<"\n";
//    cout<<n->next<<"\n";
Node* Head=n;
Node* Tail=n;
print(Head);
insert_head(Head,12);
insert_head(Head,13);
insert_head(Head,16);
print(Head);
insert_tail(Tail,99);
insert_tail(Tail,100);
print(Head);
   return 0;
}
