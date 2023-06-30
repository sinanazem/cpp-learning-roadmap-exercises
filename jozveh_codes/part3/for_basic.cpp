# include <iostream>

using namespace std;

int main(){
    int i,num;
    float sum=0;
    for (i=0;i<10;i++){
        cout << "Enter Number: ";
        cin >> num;
        sum+=num;
    }
    cout << "AVG: "<<sum/10<<endl;
    return 0;
}