#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point(int a, int b) {
        x = a;
        y = b;
    }
    void display() {
        cout << "The Point is: (" << x << ", " << y << ")" << endl;
    }
    double distanceTo(Point other) {
        int dx = x - other.x;
        int dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }
    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }
    // Function to add two points and return the result as a new point
    Point add(Point other) {
        return Point(x + other.x, y + other.y);
    }
    // Function to subtract two points and return the result as a new point
    Point subtract(Point other) {
        return Point(x - other.x, y - other.y);
    }
    // Function to check if two points are equal
    bool isEqual(Point other) {
        return x == other.x && y == other.y;
    }
};
int main() {
    Point p1(3, 5), p2(9, 1);
    p1.display();
    p2.display();
    cout << "Distance between p1 and p2: " << p1.distanceTo(p2) << endl;
    p1.move(2, -3);
    cout << "After moving, p1 ";
    p1.display();
    Point p3 = p1.add(p2);
    cout << "p1 + p2 ";
    p3.display();
    Point p4 = p2.subtract(p1);
    cout << "p2 - p1 ";
    p4.display();
    if (p1.isEqual(p2)) {
        cout << "p1 and p2 are equal." << endl;
    } else {
        cout << "p1 and p2 are not equal." << endl;
    }
    return 0;
}
