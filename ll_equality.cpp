#include<iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = NULL;
    }
};
class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }
    void insertAtTail(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
bool checkEquality(Node* &head1,Node* &head2){
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->val!=temp2->val){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return (temp1==NULL && temp2==NULL);
}
int main() {
    LinkedList ll1,ll2;
    ll1.insertAtTail(5);
    ll1.insertAtTail(10);
    ll1.insertAtTail(15);
    ll1.insertAtTail(25);
    ll1.insertAtTail(69);
    ll2.insertAtTail(5);
    ll2.insertAtTail(10);
    ll2.insertAtTail(15);
    ll2.insertAtTail(25);
    ll2.insertAtTail(69);
    ll2.display();
    ll1.display();
    cout << (checkEquality(ll1.head, ll2.head) ? "Equal" : "Not Equal");
    return 0;
}
