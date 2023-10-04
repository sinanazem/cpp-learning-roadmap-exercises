# include <iostream>
using namespace std;

// Write a program that receives 10 numbers from the input and prints their average in the output

int main(){
    int n = 0, sum = 0, number;
    float result;
    while(n<=9){
        cin >> number;
        sum = sum + number;
        n ++;
    }
    result = sum / 10;
    cout << "Sum: " << sum;
    cout << "Mean: " << result;
    return 0;
}