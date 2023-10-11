#include <iostream>

int main() {
    int number;
    std::cout << "Please Enter your number:" ;
    std::cin >> number;


    int digit1 = number % 10;
    int digit2 = (number / 10) % 10;
    int digit3 = (number / 100) % 10;
    int digit4 = number / 1000;


    int sum = digit1 + digit2 + digit3 + digit4;


    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
