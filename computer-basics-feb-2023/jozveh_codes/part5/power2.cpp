# include <iostream>

using namespace std;
int pow(int number,int power){
    if (power == 0){
        return 1;
    }
    else{
        return number*pow(number,power-1);
    }
}

int main(){
    int number, power;
    cout << "Enter Number: ";
    cin >> number;
    cout << "Enter Power: ";
    cin >> power;
    cout << number<<"^"<<power<<"= "<<pow(number,power)<<endl;
    return 0;
}