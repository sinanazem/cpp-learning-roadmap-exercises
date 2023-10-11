#include <iostream>

int digitSum(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

using namespace std; 

int main() {
    
    int firstNumber, secondNumber, targetSum;
    
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    cout << "Enter the target sum: ";
    cin >> targetSum;

    
    if (firstNumber > secondNumber) {
        cout << "Error: The first number should be less than or equal to the second number." << endl;
        return 1; // Exit with an error code
    }

    
    cout << "Numbers with digit sum equal to " << targetSum << " between " << firstNumber << " and " << secondNumber << ":" << endl;

    for (int i = firstNumber; i <= secondNumber; ++i) {
        if (digitSum(i) == targetSum) {
            cout << i << endl;
        }
    }

    return 0;
}
