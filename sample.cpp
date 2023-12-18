#include <iostream>

using namespace std;

// Function to calculate the time taken by the car to hit the wall
int calculateTimeToHitWall(int F, int B, int T, int D) {
    int total_distance = D;  // Distance to reach or cross the wall
    int cycle_time = (B * T) + (F * T);  // Time taken for one complete cycle (forward and backward)
    int complete_cycles = total_distance / B;  // Number of complete cycles needed
    int complete_cycles_time = complete_cycles * cycle_time;  // Time taken for complete cycles
    int remaining_distance = total_distance - (complete_cycles * B);  // Remaining distance after complete cycles
    int remaining_distance_time = remaining_distance * T;  // Time taken to cover the remaining distance
    int total_time = complete_cycles_time + remaining_distance_time;  // Total time taken to hit the wall
    return total_time;
}

int main() {
    int N;
    cin >> N;  // Read the number of test cases

    // Process each test case
    for (int i = 0; i < N; i++) {
        int F, B, T, D;
        cin >> F >> B >> T >> D;  // Read the values for the current test case

        // Calculate the time taken by the car to hit the wall
        int time_to_hit_wall = calculateTimeToHitWall(F, B, T, D);

        // Print the result
        cout << time_to_hit_wall << endl;
    }

    return 0;
}
