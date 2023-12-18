#include<iostream>
using namespace std;
class Node {
public:
    Node* next;
    int data;
    Node(int v) {
        data = v;
        next = nullptr;
    }
};
class CircularLL {
public:
    Node* head;
    CircularLL() {
        head = nullptr;
    }
    void insertAtStart(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head; // circular linked list
            return;
        }
        else {
            Node* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            // now tail is pointing to the last node
            tail->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }
    void insertatEnd(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            newNode->next=head;
            return;
        }
        else{
            Node* tail=head;
            while(tail->next!=head){
                tail=tail->next;
            }
            //tail is the last node of the circular ll
            tail->next=newNode;
            newNode->next=head;
        }
    }
void display() {
    if (head == nullptr) {
        cout << "Circular Linked List is empty." << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
void deleteAtStart(){
    if(head==NULL) return;
    Node* temp=head;
    Node* tail=head;
    while(tail->next!=head){
        tail=tail->next;
    }
    head=head->next;
    tail->next=head;
    delete temp;
}
void deleteAtEnd(){
    // Check if the list is empty
    if(head==NULL) return;
    // Find the second last node
    Node* tail=head;
    while(tail->next->next!=head){
        tail=tail->next;
    }
    // tail now points to the second last node
    // Create a temporary pointer to the last node
    Node* temp=tail->next;
    // Make the second last node the new last node by updating its next pointer
    tail->next=head;
    // Set the next pointer of the last node to NULL to disconnect it from the list
    temp->next=NULL;
    // Delete the last node
    delete temp;
}
};
int main() {
    CircularLL* cll = new CircularLL();
    int n;
    cout << "Enter the number of elements to be inserted: ";
    cin >> n;
    cout << "Enter the values: ";
    while (n--) {
        int val;
        cin >> val;
        cll->insertAtStart(val);
    }
    cout<<"\n";
    cll->display();
    cout<<"Inserting at the End\n";
    cll->insertatEnd(15);
    cll->insertatEnd(20);
    cll->display();
    cout<<"Deleting at the Start\n";
    cll->deleteAtStart();
    cll->display();
    cout<<"Deleting at the end\n";
    cll->deleteAtEnd();
    cll->display();
    return 0;
}