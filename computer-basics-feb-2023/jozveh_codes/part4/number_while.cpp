# include <iostream>

using namespace std;

int main(){
    int number,count=0;
    cout << "Enter your number: ";
    cin >> number;
    while(number!=0){
        count++;
        number = number/10;
 

    }
    cout << "Your Number has "<<count<<" digit!"<<endl;
    return 0;
}