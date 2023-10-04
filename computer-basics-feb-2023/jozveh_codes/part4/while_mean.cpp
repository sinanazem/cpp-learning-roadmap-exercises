# include <iostream>

using namespace std;

int main(){
    float num, sum=0;
    int count=0;
    cout << "Enter Number: ";
    cin >> num;
    while(num !=-100){
        sum+=num;
        count++;
        cout << "Enter Number: ";
        cin >> num;
    }
    cout << "AVG= "<< sum/count;
    return 0;
}