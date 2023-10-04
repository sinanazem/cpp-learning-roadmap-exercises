# include <iostream>

using namespace std;

int main(){
    int number;
    cin >> number;
    while(number!=0){
        cout << number % 10;
        number/=10;
    }
    return 0;
}