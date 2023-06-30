# include <iostream>

using namespace std;

int main(){
    int number,i,f=1;
    cout << "Enter your number: ";
    cin >> number;
    for (i=1; i<=number; i++){
        f = f*i;

    }
    cout << "Factorial is: " << f << endl;
    return 0;
}