# include <iostream>

using namespace std;

int fact(int number){
    int f=1,i;
    for (i=1;i<=number;i++){
        f=f*i;

    }
    return f;
}

int main(){
    int number;
    cout << "Enter Number: ";
    cin >> number;
    cout << "Factorial is: "<< fact(number)<<endl;
    return 0;
}