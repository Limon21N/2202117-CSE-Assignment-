#include <iostream>

using namespace std;

static const int MAX_VALUE = 100;

int main() {
    static int staticVariable = 42;

    cout << "Static Variable: " << staticVariable << endl;
    cout << "Max Value: " << MAX_VALUE << endl;

    return 0;
}
