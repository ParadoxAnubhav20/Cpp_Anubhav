#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* link;
};

int main(){
    Node* Head=NULL;
    Node* temp=new Node;
    temp->data=5;
    temp->link=NULL;
    Head=temp;
    temp=new Node;
    temp->data=6;
    temp->link=NULL;
    Head->link=temp;
    temp=new Node;
    temp->data=9;
    temp->link=NULL;
    Head->link->link=temp;
    Node *temp1=Head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->link;
    }
    return 0;
}
