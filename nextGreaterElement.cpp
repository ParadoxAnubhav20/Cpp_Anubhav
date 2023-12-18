#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nge(vector<int>& arr) {
    int n = arr.size();
    vector<int> output(n, -1);  // Initialize the output vector with -1 (indicating no next greater element)
    stack<int> st;  // Create a stack to store indices of elements
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[i] > arr[st.top()]) {
            // If the current element is greater than the element at the top of the stack,
            // update the output vector with the current element as the next greater element for the element at the top of the stack.
            output[st.top()] = arr[i];
            st.pop();  // Pop the element from the stack since it has found its next greater element
        }
        st.push(i);  // Push the current index into the stack
    }
    return output;  // Return the output vector containing the next greater elements for each element in the input vector
}
int main() {
    int n;
    cin >> n;
    vector<int> v;
    // Read the input vector
    while (n--) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    // Call the nge function to get the next greater elements
    vector<int> result = nge(v);
    // Print the next greater elements
    cout << "The Next Greater Elements are: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
