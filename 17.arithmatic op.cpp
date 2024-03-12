#include<iostream>

using namespace std;

class Sum {
public:
    int a, b;

    int add() {
        return a + b;
    }

    double multiply() {
        return static_cast<double>(a) * b;
    }
};

int main() {
    Sum limon;
    limon.a = 10;
    limon.b = 5;

    cout << "Sum: " << limon.add() << endl;
    cout << "Product: " << limon.multiply() << endl;

    return 0;
}
