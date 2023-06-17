# include <iostream>

using namespace std;

int power(int x, int y){
    int p=1,i;
    for (i=1;i<=y;i++){
        p = p*x;
    }

    return p;
}
int main(){
    int number, power_input;
    cout << "Enter The Number: ";
    cin >> number;
    cout << "Enter power: ";
    cin >> power_input;
    cout << "Result: " << power(number, power_input);

    return 0;
}