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
