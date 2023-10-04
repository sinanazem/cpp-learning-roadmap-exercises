#include <iostream>
using namespace std;

// Write a program that receives 2 numbers from the user and displays the sum of them in the output

int main(){
    int num_1, num_2, sum_result;
    cout << "please enter your first number: ";
    cin >> num_1;
    cout << "please enter your second number: ";
    cin >> num_2;

    sum_result = num_1 + num_2;
    cout << num_1 << " + " << num_2 << " = " << sum_result << "\n";
    return 0;
}
