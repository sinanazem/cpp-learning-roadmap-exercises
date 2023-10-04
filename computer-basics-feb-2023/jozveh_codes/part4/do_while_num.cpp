# include <iostream>

using namespace std;

int main(){
    int number,count=0;
    cout << "Enter your number: ";
    cin >> number;
    do{
        count++;
        number/=10;

    } while(number!=0);
    cout << "number of digit is: "<< count << endl;
    return 0;
}