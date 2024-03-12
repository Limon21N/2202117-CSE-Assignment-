#include<iostream>

using namespace std;

void printMessage(string message = "Hello, World!") {
    cout << message << endl;
}

int main() {
    printMessage(); // Default argument used
    printMessage("Custom Message");

    return 0;
}
