# include <iostream>

using namespace std;
int fact(int number){
    if (number == 0){
        return 1;
    }
    else{
        return number * fact(number-1);
    }
}
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "factorial is: "<<fact(number)<<endl;
    return 0;
}