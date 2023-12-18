#include <bits/stdc++.h>
using namespace std;
// Structure to represent a meeting
struct meeting {
    int startTime, endTime, idx;
};
// Comparator function to sort meetings based on their end times
bool comp(meeting m1, meeting m2) {
    return m1.endTime < m2.endTime;
}
// Function to print maximum meetings that can be conducted without overlap
void print_max_meeting(vector<meeting>& arr) {
    // Sort the meetings based on end times
    sort(arr.begin(), arr.end(), comp);
    // Print the first meeting as it always remains compatible
    cout << arr[0].idx << " ";
    meeting last = arr[0];  // Store the last selected meeting
    // Iterate through the rest of the meetings
    for (int i = 1; i < arr.size(); i++) {
        // Check if the current meeting's start time is after or equal to the last selected meeting's end time
        if (arr[i].startTime >= last.endTime) {
            cout << arr[i].idx << " ";  // Print the index of the current meeting
            last = arr[i];  // Update the last selected meeting
        }
    }
}
int main() {
    // Example meetings data: {startTime, endTime, idx}
    vector<meeting> meetings = {
        {1, 3, 1},
        {2, 4, 2},
        {3, 5, 3},
        {5, 6, 4}
    };
    // Print the maximum number of non-overlapping meetings
    print_max_meeting(meetings);
    return 0;
}
