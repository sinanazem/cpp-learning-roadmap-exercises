#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void displayPrimes(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are: ";

    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    std::cout << std::endl;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    displayPrimes(num1, num2);

    return 0;
}

