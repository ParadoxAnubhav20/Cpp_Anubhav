#include<iostream>
#include<vector>
using namespace std;

// Function to reverse the digits of a number
int reverse(int num) {
    int reversed = 0;
    while (num != 0) {
        int ldigit = num % 10;
        reversed = reversed * 10 + ldigit;
        num /= 10;
    }
    return reversed;
}

// Function to find and print palindrome numbers within a given range
void palindrome_in_range(int start, int end) {
    vector<int> ans; // Vector to store palindrome numbers

    // Loop through the numbers in the given range
    for (int i = start; i <= end; i++) {
        if (i == reverse(i)) { // Check if the number is a palindrome
            ans.push_back(i); // Add the palindrome number to the vector
        }
    }

    // Check if any palindrome numbers were found
    if (!ans.empty()) {
        // Print the palindrome numbers separated by spaces
        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "No palindromes found in the range." << endl;
    }
}

int main() {
    palindrome_in_range(10, 50); // Call the function to find and print palindromes in the range (10, 50)
    return 0;
}
