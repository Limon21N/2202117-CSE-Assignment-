#include <iostream>

using namespace std;

class Swapper {
public:
    void swapValues(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    Swapper mySwapper;
    int num1 = 5, num2 = 7;

    cout << "Before Swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    mySwapper.swapValues(num1, num2);

    cout << "After Swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
