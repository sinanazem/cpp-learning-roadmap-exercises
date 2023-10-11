#include <iostream>
using namespace std;

// Write a program that writes an up and down counter from 0 to 100

// int main(){
//     for (int i = 0; i < 100; i++){
//         cout << i << " ";
//     }

//     return 0;
// }

// int main(){
//     for (int i = 99; i >= 0; i--){
//         cout << i << " ";
//     }

//     return 0;
// }



// Write a program that receives 2 numbers from the user and prints a counter from them.

int main(){
    int first_number, second_number;
    cout << "please enter your first number: " << endl;
    cin >> first_number;
    cout << "please enter your second number: " << endl;
    cin >> second_number;

    if (first_number > second_number){
        for (int i = 0; first_number>=second_number; i++){
            cout << first_number << " ";
            first_number --;
        }
    }
    else{
        for (int i = 0; second_number>=first_number; i++){
            cout << second_number << " ";
            second_number --;
        }
    }

    return 0;
}
