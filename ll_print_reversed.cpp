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
void reverse(Node* &head){
    if(head==NULL){
        return;
    }
    reverse(head->next);
    cout<<head->val<<"->";
}
int main() {
    LinkedList ll;
    ll.insertAtTail(5);
    ll.insertAtTail(10);
    ll.insertAtTail(15);
    ll.insertAtTail(25);
    ll.insertAtTail(69);
    ll.display();
    reverse(ll.head);
    cout<<endl;
    ll.display();
    return 0;
}
