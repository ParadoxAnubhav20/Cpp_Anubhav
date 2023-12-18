#include<iostream>
using namespace std;
void noOfReps(int reps) {
    for(int i = 0; i < reps; i++) {
        cout << "Now Doing Rep " << (i + 1) << endl;
    }
}
void doYouEvenLift() {
    cout << "Do You Even Lift Bro?" << endl;
}
void calculateMaxWeight() {
    double weight;
    cout << "Enter your current weight: ";
    cin >> weight;
    double maxWeight = 1.5 * weight;
    cout << "Your maximum lifting weight is: " << maxWeight << " pounds" << endl;
}
void printWorkoutPlan() {
    cout << "Today's Workout Plan:" << endl;
    cout << "1. Warm-up exercises" << endl;
    cout << "2. Squats: 3 sets of 10 reps" << endl;
    cout << "3. Bench Press: 3 sets of 8 reps" << endl;
    cout << "4. Deadlifts: 3 sets of 6 reps" << endl;
    cout << "5. Shoulder Press: 3 sets of 10 reps" << endl;
}
int main() {
    int reps;
    cout << "Enter the number of times you want to repeat: ";
    cin >> reps;
    noOfReps(reps);
    doYouEvenLift();
    calculateMaxWeight();
    printWorkoutPlan();
    return 0;
}
