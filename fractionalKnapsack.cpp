#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct item
{
    int value, weight; 
};
bool cmp(item i1, item i2) {
    // Custom comparator for sorting based on value-to-weight ratio
    double v_w_i1 = static_cast<double>(i1.value) / i1.weight;
    double v_w_i2 = static_cast<double>(i2.value) / i2.weight;
    return v_w_i1 > v_w_i2;
}
double fractional(int W, vector<item>& items) {
    double ans = 0;
    // Sort items based on value-to-weight ratio
    sort(items.begin(), items.end(), cmp);
    for (const auto& item : items) {
        if (item.weight <= W) {
            // If the entire item can be picked, add its value
            ans += item.value;
            W -= item.weight;
        } else {
            // Pick a fraction of the item as space in the knapsack is less
            double fraction = static_cast<double>(W) / item.weight;
            ans += fraction * item.value;
            break; // No need to continue, knapsack is full
        }
    }
    return ans;
}
int main() {
    int knapsackCapacity = 50;
    // Sample items: value and weight
    vector<item> items = {
        {60, 10},
        {100, 20},
        {120, 30}
    };
    double result = fractional(knapsackCapacity, items);
    cout << "Maximum value achievable: " << result << endl;
    return 0;
}
