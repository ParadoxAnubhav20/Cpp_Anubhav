#include<iostream>
using namespace std;
void summN(int i, int sum) {
    if (i < 1) {
        cout <<"Sum:"<< sum << endl;
        return;
    }
    summN(i - 1, sum + i);
}
int main() {
    int n;
    cout << "Please enter a positive integer: ";
    cin >> n;
    cout << "Calculating the sum of numbers from 1 to " << n << "..." << endl;
    summN(n, 0);
    return 0;
}
