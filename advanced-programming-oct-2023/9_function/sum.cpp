#include <iostream>
using namespace std;

int add(int num1, int num2){
    return num1 + num2;
}

int main(){
    int number_1, number_2;
    cout << "Please enter first number: ";
    cin >> number_1;

    cout << "Please enter second number: ";
    cin >> number_2;

    cout << number_1 << " + " << number_2 << " = " << add(number_1, number_2) << endl;

    return 0;
}