#include <iostream>

// Function to convert decimal to binary
int decimalToBinary(int decimal) {
    int binary = 0;
    int placeValue = 1;

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder * placeValue;
        decimal /= 2;
        placeValue *= 10;
    }

    return binary;
}

int main() {
    int decimal;

    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    int binary = decimalToBinary(decimal);

    std::cout << "Binary representation: " << binary << std::endl;

    return 0;
}
