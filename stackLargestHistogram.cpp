#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
class Solution {
public:
    int largestRectangleArea(std::vector<int>& heights) {
        int n = heights.size();
        std::stack<int> st;
        int ans = 0; // Initialize the answer to 0
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || heights[i] < heights[st.top()])) {
                // Calculate the area using the popped height as the rectangle height
                int h = heights[st.top()];
                st.pop();
                // Calculate the width of the rectangle
                int w = st.empty() ? i : i - 1 - st.top();
                // Update the maximum area
                ans = std::max(ans, h * w);
            }
            st.push(i); // Push the index to the stack
        }
        return ans; // Return the maximum area
    }
};
int main() {
    // Create an instance of the Solution class
    Solution solution;
    // Create a vector of heights
    std::vector<int> heights = {2, 1, 5, 6, 2, 3};
    // Call the largestRectangleArea function
    int largestArea = solution.largestRectangleArea(heights);
    // Print the result
    std::cout << "Largest Rectangle Area: " << largestArea << std::endl;
    return 0;
}
