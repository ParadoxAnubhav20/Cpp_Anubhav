#include <iostream>
using namespace std;
int fibo(int num) {
    cout << "Calculating Fibonacci for " << num << endl;
    if (num == 0 || num == 1)
        return num;
    int result = fibo(num - 1) + fibo(num - 2);
    cout << "Fibonacci for " << num << " is " << result << endl;   
    return result;
}
int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << "Calculating Fibonacci sequence up to " << n << endl;
    cout << "Ans: " << fibo(n) << endl;
    return 0;
}
