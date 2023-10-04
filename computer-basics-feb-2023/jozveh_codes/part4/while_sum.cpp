# include <iostream>

using namespace std;

int main(){
    int sum=0,num;
    cout << "Enter Number: ";
    cin >> num;
    while(num != -100){
        sum+=num;
        cout << "Enter Number: ";
        cin >> num;
    }
    cout << "Sum is: "<<sum;
    return 0;
}