#include <iostream>
using namespace std;

// Write a program that displays the number of input digits

int main(){
    int input_number, c=0;
    cin >> input_number;
    int number = input_number;
    while (input_number != 0){
        input_number = input_number /10;
        c ++;
    }
    cout << "Number of digits for " << number << " is: " << c << endl;
    return 0;
}

