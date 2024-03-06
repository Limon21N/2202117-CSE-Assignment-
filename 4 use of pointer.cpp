#include <iostream>

int main() {
    using namespace std;

    int number = 42;
    int *ptr = &number;

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Value of pointer: " << ptr << endl;

    cout << "Value obtained through the pointer: " << *ptr << endl;

    *ptr = 99;

    cout << "Updated value of number: " << number << endl;

    return 0;
}

