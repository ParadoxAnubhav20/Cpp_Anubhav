#include <iostream>
#include <vector>
using namespace std;
vector<int> getDigits(int n) {
    vector<int> digits;
    while (n != 0) {
        int lastDigit = n % 10;
        digits.push_back(lastDigit);
        n /= 10;
    }
    return digits;
}
void printDigits(const vector<int>& digits) {
    cout << "Digits in reverse order: ";
    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i] << " ";
    }
    cout << endl;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> digits = getDigits(num);
    printDigits(digits);
    return 0;
}
