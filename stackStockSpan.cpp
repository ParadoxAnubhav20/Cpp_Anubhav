#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
vector<int> stockSpan(vector<int>& prices) {
    int n = prices.size();
    reverse(prices.begin(), prices.end());
    vector<int> spans(n, 1);  // Initialize the spans vector with 1 (indicating each element is its own span)
    stack<int> st;  // Create a stack to store indices of elements
    for (int i = 0; i < n; i++) {
        while (!st.empty() && prices[i] > prices[st.top()]) {
            // If the current price is greater than the price at the top of the stack,
            // update the spans vector with the span of the current price as the difference
            // between the current index and the index at the top of the stack.
            int prevIndex = st.top();
            st.pop();
            spans[prevIndex] = i - prevIndex;
        }
        st.push(i);  // Push the current index into the stack
    }
    reverse(spans.begin(), spans.end());
    reverse(prices.begin(), prices.end());
    return spans;  // Return the spans vector containing the span for each price in the input vector
}
int main() {
    int n;
    cin >> n;
    vector<int> prices;
    // Read the input vector
    while (n--) {
        int price;
        cin >> price;
        prices.push_back(price);
    }
    // Call the stockSpan function to get the stock spans
    vector<int> spans = stockSpan(prices);
    // Print the stock spans
    cout << "The Stock Spans are: ";
    for (int i = 0; i < spans.size(); i++) {
        cout << spans[i] << " ";
    }
    cout << "\n";
    return 0;
}
