#include<iostream>
using namespace std;

void printNumbersDecreasing(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNumbersDecreasing(n - 1);
}

void printNumbersIncreasing(int n, int current = 1) {
    if (current > n) return;
    cout << current << " ";
    printNumbersIncreasing(n, current + 1);
}

int main() {
    int n = 15;
    
    cout << "Printing numbers in decreasing order: ";
    printNumbersDecreasing(n);
    
    cout << "\nPrinting numbers in increasing order: ";
    printNumbersIncreasing(n);

    return 0;
}
