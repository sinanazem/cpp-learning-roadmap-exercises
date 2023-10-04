#include <iostream>
using namespace std;

// Write a program that receives a number from the user and prints that number ("*").

int main(){
    int number_of_star;
    cout << "please enter number of star: ";
    cin >> number_of_star;
    while (number_of_star > 0){
        cout << "*" << endl;
        number_of_star --;
    }
    return 0;
}