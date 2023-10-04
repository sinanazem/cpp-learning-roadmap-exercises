# include <iostream>
using namespace std;

int main(){
    int number_1, number_2;
    cout << "Number 1: ";
    cin >> number_1;
    cout << "Number 2: ";
    cin >> number_2;

    if (number_1 > number_2){
        cout << "Min: " << number_2 << endl;
        cout << "Max: " << number_1 << endl;
    }
    else{
        cout << "Min: " << number_1 << endl;
        cout << "Max: " << number_2 << endl;
    }

    return 0;
}