#include <iostream>
using namespace std;

int main() {
    int value = 10;
    int* pointer1 = &value;  // Pointer to the variable
    int** pointer2 = &pointer1;  // Pointer to the pointer

    cout << "Value: " << **pointer2 << endl;

    int& referenceToPointer = *pointer1;  // Reference to the pointer

    referenceToPointer = 20;  // Update the value indirectly

    cout << "Value after update: " << **pointer2 << endl;

    return 0;
}
