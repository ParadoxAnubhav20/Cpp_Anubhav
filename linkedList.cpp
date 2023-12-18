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
void insertAtHead(Node* &head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void insertAtTail(Node* &head, int v) {
    Node* newNode = new Node(v); // Create a new node with the given value
    if (head == NULL) { // If the list is empty, make the new node the head
        head = newNode;
        return;
    }
    Node* temp = head; // Start traversing the list from the head
    while (temp->next != NULL) { // Move to the last node of the list
        temp = temp->next;
    }
    temp->next = newNode; // Attach the new node at the end of the list
}
void insertAtPosition(Node* &head, int val, int pos) {
    if (pos == 0) { // If the position is 0, insert the node at the head
        insertAtHead(head, val);
        return;
    }
    Node* new_node = new Node(val); // Create a new node with the given value
    Node* temp = head; // Start traversing the list from the head
    int current_pos = 0; // Initialize the current position to 0
    while (current_pos != pos - 1) { // Move to the node just before the desired position
        temp = temp->next;
        current_pos += 1;
    }
    new_node->next = temp->next; // Attach the new node after the current node
    temp->next = new_node; // Update the next pointer of the current node to point to the new node
}
void updateAtPosition(Node* &head, int k, int v) {
    int curr_pos = 0; // Initialize the current position to 0
    Node* temp = head; // Start traversing the list from the head
    while (curr_pos != k) { // Move to the desired position
        temp = temp->next;
        curr_pos++;
    }
    temp->val = v; // Update the value of the node at the desired position
}
void deletionAtHead(Node* &head) {
    // Create a temporary pointer and assign it the value of the head node
    Node* temp = head;
    // Update the head pointer to point to the next node, effectively removing the current head node from the list
    head = head->next;
    // Deallocate the memory occupied by the previous head node
    delete temp;
}
void deletionAtEnd(Node* &head) {
    // Initialize a pointer to track the second-to-last node
    Node* second_lastNode = head;
    // Traverse the linked list to reach the second-to-last node
    while (second_lastNode->next->next != NULL) {
        second_lastNode = second_lastNode->next;
    }
    // Create a temporary pointer to the last node
    Node* temp = second_lastNode->next;
    // Update the second-to-last node's next pointer to NULL, effectively removing the last node
    second_lastNode->next = NULL;
    // Deallocate the memory occupied by the last node
    delete temp;
}
void deleteAtPosition(Node* head, int pos) {
    // Check if the position is 0, indicating deletion at the head
    if (pos == 0) {
        deletionAtHead(head);
        return;
    }
    // Initialize a pointer to track the previous node
    Node* prev = head;
    // Initialize a variable to keep track of the current position
    int curPos = 0;
    // Traverse the linked list to reach the node just before the desired position
    while (curPos != pos - 1) {
        prev = prev->next;
        curPos++;
    }
    // Create a temporary pointer to the node at the desired position
    Node* temp = prev->next;
    // Update the previous node's next pointer to skip the node at the desired position
    prev->next = prev->next->next;
    // Set the next pointer of the temp node to NULL to isolate it from the list
    temp->next = NULL;
    // Deallocate the memory occupied by the node at the desired position
    delete temp;
}
int main() {
    Node* head = NULL;
    insertAtHead(head, 25);
    insertAtHead(head, 20);
    insertAtHead(head, 15);
    insertAtHead(head, 10);
    insertAtHead(head, 5);
    insertAtTail(head,30);
    insertAtTail(head,35);
    display(head);
    insertAtPosition(head,69,3);
    insertAtPosition(head,420,5);
    display(head);
    updateAtPosition(head,4,18);
    display(head);
    deletionAtHead(head);
    display(head);
    deletionAtEnd(head);
    display(head);
    deleteAtPosition(head,4);
    display(head);
    return 0;
}
