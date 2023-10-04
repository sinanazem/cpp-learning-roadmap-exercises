# include <iostream>
using namespace std;


//AND

// Design a program that takes two numbers from the input,
//  if the first number is greater than one and
//   the second number is equal to 5, then print the statement ok

int main(){
    int num_1, num_2;
    cout << "please enter num1 and num 2: ";
    cin >> num_1 >> num_2;
    if (num_1 > 1 && num_2 == 5){
        cout << "ok" << endl;
    }
    return 0;
}


//OR

// Design a program that takes two numbers from the input,
//  the first number is greater than one and the second number is equal to 5.
//   The expression "ok" if one of the conditions
// It was correct to print in the output

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     if (num1 > 1 || num2 == 5){
//         cout << "ok" << endl;
//     }
//     return 0;
// }


//NOT

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     if (!(num1 == num2)){
//         cout << "Not Equal" << endl;
//     }
//     return 0;
// }
