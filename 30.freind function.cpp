#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    friend void printArea(const Rectangle& rect);
};

void printArea(const Rectangle& rect) {
    cout << "Area of the rectangle: " << rect.length * rect.width << endl;
}

int main() {
    Rectangle myRectangle(4.0, 6.0);
    printArea(myRectangle);

    return 0;
}
