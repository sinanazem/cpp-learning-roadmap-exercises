# include <iostream>

using namespace std;

int main(){
    float sum=0,avg,i;
    for (i=1; i<=10; i++){
        sum=sum+i;
    }
    avg=sum/10;
    cout << "Sum= "<<sum<<endl;
    cout << "Avg= "<<avg<<endl;

    return 0;
}