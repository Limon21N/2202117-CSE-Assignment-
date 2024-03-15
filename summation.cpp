#include <iostream>

using namespace std;

class Series {
public:
    int n;

    int cal() {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        return sum;
    }
};

int main() {
    Series Obj;

    cout << "Enter a positive integer n: ";
    cin >> Obj.n;

    cout << "Sum of the series from 1 to " << Obj.n << ": " << Obj.cal() << endl;

    return 0;
}
