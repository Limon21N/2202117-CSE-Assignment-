#include <iostream>

using namespace std;

struct Point {
    double x, y;

    Point operator+(const Point& other) const {
        Point result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    }
};

int main() {
    Point point1 = {2.5, 3.0};
    Point point2 = {1.5, 2.0};

    Point result = point1 + point2;

    cout << "Resultant Point: (" << result.x << ", " << result.y << ")" << endl;

    return 0;
}
