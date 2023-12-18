#include <iostream>
using namespace std;
int sumN(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumN(n - 1);
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The sum of numbers from 1 to " << n << " is: " << sumN(n) << endl;
    return 0;
}
