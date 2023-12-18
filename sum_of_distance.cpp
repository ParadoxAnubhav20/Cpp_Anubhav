#include <iostream>
#include <cmath>
using namespace std;
// Function to calculate the distance between two points (x1, y1) and (x2, y2)
double distance(double x1, double y1, double x2, double y2) {
    double dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return dis;
}
int main() {
    double x1, y1, x2, y2, x3, y3;
    double ans = 0;
    // Input three coordinate points
    cout << "Enter coordinates for Point 1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates for Point 2 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates for Point 3 (x3 y3): ";
    cin >> x3 >> y3;
    // Calculate the sum of distances between the three points
    ans += distance(x1, y1, x2, y2) + distance(x1, y1, x3, y3) + distance(x2, y2, x3, y3);
    // Output the result
    cout << "Sum of distances is: " << ans << endl;
    return 0;
}
