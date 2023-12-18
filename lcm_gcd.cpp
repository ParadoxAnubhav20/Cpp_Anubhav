#include <iostream>

// Function to calculate the GCD (Greatest Common Divisor)
long long int gcd(long long int a, long long int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate the LCM (Least Common Multiple)
long long int lcm(long long int a, long long int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    long long int num1, num2;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    long long int result = lcm(num1, num2);

    std::cout << "LCM of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}
