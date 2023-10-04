# include <iostream>
using namespace std;
int main(){
    float sum=0, avg;
    for(int i=1; i<=3; i++){
        sum+=i;
    };
    cout << sum<< endl;
    avg = sum/3;
    cout << "Avrage is: " << avg << endl;
    return 0;
}