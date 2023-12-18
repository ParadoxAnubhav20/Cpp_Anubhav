#include<iostream>
using namespace std;
int main(){
 // && operator
 int p=15,q=10,r=5;
 cout<<((p > q) && (p > r)); // true
 cout<<((p > q) && (p < r)); // false
 // || operator
 cout<<((r < q) || (p < q)); // true
 cout<<((p > q) || (q > r)); // true
 cout<<((p < q) || (p < r)); // false
 // ! operator
 cout<<(!(p == q)); // true
 cout<<(!(p > q)); // false
 }