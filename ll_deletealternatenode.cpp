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
void deleteAlternateNode(Node* &head){
    Node* curr_node=head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node* temp=curr_node->next;
        curr_node->next=curr_node->next->next;
        delete temp;
        curr_node=curr_node->next;
    }
}
void deleteDuplicates(Node* &head){
    Node* curr_node=head;
    while(curr_node){
        while(curr_node->next && curr_node->val==curr_node->next->val){
            Node* temp=curr_node->next;
            curr_node->next=curr_node->next->next;
            delete temp;
            curr_node=curr_node->next;
        }
    }
}
int main() {
    LinkedList ll;
    ll.insertAtTail(5);
    ll.insertAtTail(10);
    ll.insertAtTail(15);
    ll.insertAtTail(25);
    ll.insertAtTail(69);
    ll.display();
    deleteAlternateNode(ll.head);
    ll.display();
    return 0;
}
