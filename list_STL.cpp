#include <iostream>
#include <list>
using namespace std;
void manipulateList(list<int>& l) {
    cout << "Initial list: ";
    for (const int& num : l) {
        cout << num << " ";
    }
    cout << endl;
    // Insert elements
    l.push_front(2);
    l.push_back(10);
    cout << "After inserting elements: ";
    for (const int& num : l) {
        cout << num << " ";
    }
    cout << endl;
    // Advance iterator and delete element
    list<int>::iterator itr = l.begin();
    advance(itr, 2);
    l.erase(itr);
    cout << "After advancing and deleting element: ";
    for (const int& num : l) {
        cout << num << " ";
    }
    cout << endl;
}
void reverseList(list<int>& l) {
    l.reverse();
    cout << "Reversed list: ";
    for (const int& num : l) {
        cout << num << " ";
    }
    cout << endl;
}
void sortList(list<int>& l) {
    l.sort();
    cout << "Sorted list: ";
    for (const int& num : l) {
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    int size;
    cout << "Enter the size of the list: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    list<int> l1;
    int num;
    for (int i = 0; i < size; ++i) {
        cin >> num;
        l1.push_back(num);
    }
    // Call the function to manipulate the list
    manipulateList(l1);
    // Reverse the list
    reverseList(l1);
    // Sort the list
    sortList(l1);
    return 0;
}
