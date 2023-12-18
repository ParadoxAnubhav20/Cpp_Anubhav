#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<long long> findFirstNegativesInWindows(long long A[], long long N, long long K) {
    int windowStart = 0;
    int windowEnd = 0;
    deque<long long> negativeNumbers;
    vector<long long> results;

    while (windowEnd < N) {
        // Check if the current element is negative and add it to the deque
        if (A[windowEnd] < 0) {
            negativeNumbers.push_back(A[windowEnd]);
        }

        // Check if the window size is less than K, expand the window
        if (windowEnd - windowStart + 1 < K) {
            windowEnd++;
        }
        // If the window size is equal to K
        else if (windowEnd - windowStart + 1 == K) {
            // If there are no negative numbers in the window, add 0 to results
            if (negativeNumbers.empty()) {
                results.push_back(0);
            } else {
                // Add the first negative number in the deque to results
                results.push_back(negativeNumbers.front());
                // If the element at windowStart is negative, remove it from the deque
                if (A[windowStart] < 0) {
                    negativeNumbers.pop_front();
                }
            }
            // Move the window to the right by incrementing both start and end
            windowStart++;
            windowEnd++;
        }
    }
    return results;
}
