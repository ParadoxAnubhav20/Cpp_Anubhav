#include <iostream>
#include <vector>

using namespace std;

int factorial(int x) {
    int fact = 1;
    for (int i = 2; i <= x; ++i) {
        fact *= i;
    }
    return fact;
}

int maxStrength(int n) {
    int max_strength = 0;

    for (int i = n; i >= 1; --i) {
        int num = i;
        int sum_of_factorials = 0;
        
        while (num > 0) {
            int digit = num % 10;
            sum_of_factorials += factorial(digit);
            num /= 10;
        }
        
        if (sum_of_factorials == i) {
            max_strength = max(max_strength, i);
        }
    }
    
    return max_strength * (max_strength != 0);
}

int main() {
    int n;
    cin >> n;
    
    int result = maxStrength(n);
    cout << result << "\n";
    
    return 0;
}
