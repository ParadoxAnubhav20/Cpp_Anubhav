#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int second_largest(vector<int>& arr) {
    int max_ele = arr[0];
    int second_max = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max_ele) {
            second_max = max_ele;
            max_ele = arr[i];
        } else if (arr[i] > second_max && arr[i] < max_ele) {
            second_max = arr[i];
        }
    }
    return second_max;
}
void sort(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}
void display(const vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {2, 1, 5, 7, 1, 8, 9};
    vector<int> evenArray;
    vector<int> oddArray;
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) {
            evenArray.push_back(arr[i]);
        } else {
            oddArray.push_back(arr[i]);
        }
    }
    // Sort the arrays in ascending order
    sort(evenArray);
    sort(oddArray);
    cout << "Even Array: ";
    display(evenArray);
    cout << "Odd Array: ";
    display(oddArray);
    int sum_second_largest = second_largest(evenArray) + second_largest(oddArray);
    cout << "The Sum of Second Largest Element of the both the arrays is: " << sum_second_largest << endl;
    return 0;
}
