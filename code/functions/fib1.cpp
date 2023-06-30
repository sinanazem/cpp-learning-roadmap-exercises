# include <iostream>

using namespace std;

int fib(int n){
    if (n==1 || n==2){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
int main(){
    int number;
    cout << "Enter Number: ";
    cin >> number;
    for (int i=1;i<=number;i++){
        cout << fib(i) << " ";
    }

    return 0;
}