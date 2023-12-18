#include <iostream>
#include "node.cpp"
using namespace std;
Node* input(){
    int data;
    cout<<"Enter the Elements:";
    cin>>data;
    Node* head=NULL;
    while(data!=-1){
        Node* newnode=new Node(data);
        if(head==NULL){
            head=newnode;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node* head=input();
    // creating statically
    // Node n1(1);
    // Node *head = &n1;
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;
    // //  n1.next = &n2;
    // // // cout << n1.data << " " << n2.data << endl;
    // // cout << head->data << endl;
    // // cout << n1.next << " " << n2.next << endl;
    // // cout << &n2 << endl;
    // // Node *n3 = new Node(3);
    // // Node *head = n3;
    // // Node *n4 = new Node(4);
    // // n3->next = n4;
    print(head);
    return 0;
}