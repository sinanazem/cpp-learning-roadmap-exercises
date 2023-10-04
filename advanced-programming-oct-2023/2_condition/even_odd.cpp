#include <iostream>
using namespace std;

// Design a program that receives a number from the user and if the number is even,
//  it prints the expression "even"  in the output and prints the input number.


// int main(){
//     int number;
//     cout << "Please Enter a number: ";
//     cin >> number;
//     if (number % 2 == 0){
//         cout << "even" << endl;

//     }
//     cout << number << endl;

//     return 0;
// }




// Write a program that reads an integer from the input and puts it in the x variable,
//  if the number is even, first print the expression ("even") in the output.
// then subtract one unit from (x) and in any case the input number will be printed

int main(){
    int x, input_number;
    cout << "Please enter number (x): ";
    cin >> x;
    input_number = x;

    if(x % 2 == 0){
        cout << "even" << endl;
        x = x - 1;
        cout << "x: " << x << endl;


    }
    cout << input_number << endl;

    return 0;
}
