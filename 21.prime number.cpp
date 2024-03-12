#include <iostream>

using namespace std;

class PrimeChecker {
public:
    int number;

    bool isPrime() {
        if (number <= 1) {
            return false;
        }

        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    PrimeChecker primeObj;
    
    cout << "Enter an integer: ";
    cin >> primeObj.number;

    if (primeObj.isPrime()) {
        cout << primeObj.number << " is a prime number." << endl;
    } else {
        cout << primeObj.number << " is not a prime number." << endl;
    }

    return 0;
}
