#include<iostream>
#include<stack>
using namespace std;
void insertSpecificPositionRecursive(stack<int>& s, int idx, int ele, int count = 0) {
  if (count == idx) {
    s.push(ele);
    return;
  }
  int cur = s.top();
  s.pop();
  insertSpecificPositionRecursive(s, idx, ele, count + 1);
  s.push(cur);
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
  s.push(19);
  s.push(25);
  displayStack(s);
  int ele;
  cout << "Enter the element to be inserted at the specific position: ";
  cin >> ele;
  insertSpecificPositionRecursive(s, 2, ele);
  displayStack(s);
  return 0;
}
