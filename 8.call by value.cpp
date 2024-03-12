#include <iostream>

using namespace std;

struct Rect {
    double l, w;
};

double calcArea(Rect r) {
    return r.l * r.w;
}

int main() {
    Rect myRect = {5.0, 3.0};

    double area = calcArea(myRect);

    cout << "Area: " << area << endl;

    return 0;
}
