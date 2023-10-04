# include <iostream>

using namespace std;

int main(){
    int i,number,flag=0;
    cout << "Enter your number: ";
    cin >> number;

    for (i=2;i<number;i++){
        if (number % i == 0){
            flag = 1;
        }
    }
    if (flag == 0){
        cout << "is prime";
    }
    else{
        cout << "not prime";
    }
    return 0;
}