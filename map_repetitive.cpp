#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    map<int, int> elementCount;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        // Increase the count of the element in the map
        elementCount[num]++;
    }
    int sum = 0;
    //pair-element,frequency
    for (const auto& pair : elementCount) {
        // Check if the count of an element is greater than 1
        if (pair.second > 1) {
            sum += pair.first; // Add the element to the sum
        }
    }
    cout << "Sum of repetitive elements: " << sum << endl;
    return 0;
}
