#include<iostream>
using namespace std;
// Recursive function to print numbers from i to n
void print(int i, int n){
    if(i < 1)
        return;
    print(i - 1, n);
    cout << i << " ";
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // Call the print function to start printing numbers from 0 to n
    print(n, n);
    return 0;
}
