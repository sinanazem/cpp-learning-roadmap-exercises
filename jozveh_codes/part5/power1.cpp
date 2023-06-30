# include <iostream>

using namespace std;
int pow(int number, int power){
    int p=1,i;
    for (i=0;i<power;i++){
        p = p*number;
    }
    return p;
}
int main(){
    int number, power;
    cout << "Enter Number: ";
    cin >> number;
    cout << "Enter Power ";
    cin >> power;
    cout <<number<<'^'<<power<<"= "<< pow(number, power);
    return 0;
}