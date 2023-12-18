#include <iostream>
using namespace std;
int factN(int n) {
    if (n == 0 or n==1) {
        return 1;
    }
    return n * factN(n - 1);
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The Factorial " << n << " is: " << factN(n) << endl;
    return 0;
}