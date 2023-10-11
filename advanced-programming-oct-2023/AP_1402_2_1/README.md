# C++ Exercise Series
<img src="https://www.textanywhere.com/wp-content/uploads/images/textanywhere/website/developer-zone-banner.svg" width=450><br>
## Overview

This repository contains my solutions to the first series of C++ exercises assigned by **Mehran Ghoratolhamid**. <br>The solutions are implemented in C++ and aim to demonstrate my understanding of these concepts.

## Table of Contents

- [Exercise 1](#exercise-1)
- [Exercise 2](#exercise-2)
- [Exercise 3](#exercise-3)

## Exercise Details

### Exercise 1
- **Description:** Write a program that receives a four-digit number from the input and prints the sum of its digits.<br>
- **File(s):** exercise1.cpp<br>
- **Solution:**<br>
```
#include <iostream>
#using namespace std;
int main() {
  
    int number;

   
    cout << "Please Enter your number:" ;
    cin >> number;

    
    int digit1 = number % 10;       
    int digit2 = (number / 10) % 10; 
    int digit3 = (number / 100) % 10;
    int digit4 = number / 1000;

   
    int sum = digit1 + digit2 + digit3 + digit4;

  
    cout << "Sum: " << sum << endl;

    return 0;
}

```

### Exercise 2
- **Description:** Write a program that reads three numbers and displays the numbers between the first and second numbers whose sum of digits is equal to the third number
For example, if the user enters the numbers 5, 1000 and 15, the program should display all the numbers from 5 to 1000, whose set of digits is equal to 15.<br>
- **File(s):** exercise2.cpp<br>
- **Solution:**<br>
```
#include <iostream>

// Function to calculate the sum of digits in a number
int digitSum(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    // Read three numbers from the user
    int firstNumber, secondNumber, targetSum;
    
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;

    std::cout << "Enter the target sum: ";
    std::cin >> targetSum;

    // Validate the input
    if (firstNumber > secondNumber) {
        std::cout << "Error: The first number should be less than or equal to the second number." << std::endl;
        return 1; // Exit with an error code
    }

    // Display numbers with digit sum equal to the target sum
    std::cout << "Numbers with digit sum equal to " << targetSum << " between " << firstNumber << " and " << secondNumber << ":" << std::endl;

    for (int i = firstNumber; i <= secondNumber; ++i) {
        if (digitSum(i) == targetSum) {
            std::cout << i << std::endl;
        }
    }

    return 0; // Exit successfully
}


```

### Exercise 3
- **Description:** Write a program that reads two numbers and shows the "prime numbers" between those two numbers.<br>
- **File(s):** exercise3.cpp<br>
- **Solution:**<br>
```
#include <iostream>

// Function to check if a number is prime
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

// Function to display prime numbers between two given numbers
void displayPrimes(int start, int end) {
    std::cout << "Prime numbers between " << start << " and " << end << " are: ";

    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
}

int main() {
    int num1, num2;

    // Input the two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Display prime numbers between the two numbers
    displayPrimes(num1, num2);

    return 0;
}


```
