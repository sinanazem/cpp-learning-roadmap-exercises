#include <iostream>

using namespace std;

int fib(int number){
    if (number == 1 || number == 2){
        return 1;
    }
    else{
        return fib(number - 1)+fib(number - 2);
    }
}

int main(){
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}