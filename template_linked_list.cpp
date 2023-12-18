#include <iostream>
#include <algorithm>
using namespace std;
template<typename T>
class Node{
public:
    T val;
    Node* next;
    Node(T data){
        val = data;
        next = nullptr;
    }
};
template<typename T>
void printLinkedList(Node<T>* head){
    Node<T>* current = head;
    while(current != nullptr){
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}
template<typename T>
void insertAtEnd(Node<T>*& head, T data){
    Node<T>* newNode = new Node<T>(data);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node<T>* current = head;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = newNode;
}
int main(){
    Node<int>* intList = nullptr;
    insertAtEnd(intList, 1);
    insertAtEnd(intList, 2);
    insertAtEnd(intList, 3);
    cout << "Integer Linked List: ";
    printLinkedList(intList);
    Node<char>* charList = nullptr;
    insertAtEnd(charList, 'a');
    insertAtEnd(charList, 'b');
    insertAtEnd(charList, 'c');
    cout << "Character Linked List: ";
    printLinkedList(charList);
    return 0;
}
