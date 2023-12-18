#include <iostream>
#include <stack>
using namespace std;
void insertAtSpecificRecursive(stack<int>& s, int ele, int idx,int count=0) {
  if (count==s.size()-idx) {
    s.push(ele);
    return;
  }
  int top = s.top();
  s.pop();
  insertAtSpecificRecursive(s, ele, idx,count++);
  s.push(top);
}
void displayStack(const stack<int>& st) {
  cout << "Elements in the stack:\n";
  stack<int> temp = st;
  while (!temp.empty()) {
    cout << temp.top() << "\n";
    temp.pop();
  }
}
int main() {
  stack<int> s;
  s.push(12);
  s.push(15);
  s.push(18);
  s.push(25);
  s.push(30);
  displayStack(s);
  int ele;
  cout << "Enter the element to be inserted: ";
  cin >> ele;
  insertAtSpecificRecursive(s, ele,2,0);
  displayStack(s);

  return 0;
}
