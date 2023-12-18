#include<iostream>
using namespace std;
void recursive_function(int n) {
    if (n <= 0) {
        cout << "End\n";
        return;
    }
    cout << "Start\n";
    cout << "Recursive function with n = " << n << endl;
    // Recursive call with a reduced value of n
    recursive_function(n - 1);
    cout << "End\n";
}
int main() {
    int n = 5; // You can choose any positive integer for n
    recursive_function(n);
    return 0;
}
