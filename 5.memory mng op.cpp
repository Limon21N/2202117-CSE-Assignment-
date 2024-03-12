#include <iostream>

using namespace std;

int main() {
    int* dynamicInteger = new int;
    *dynamicInteger = 42;

    cout << *dynamicInteger << endl;

    delete dynamicInteger;

    return 0;
}
