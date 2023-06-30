# include <iostream>

using namespace std;

int main(){
    int num,i;
    cout << "enter you number: ";
    cin >> num;
    for (i=1;i<=num;i++){
        if (num % i == 0){
            cout << i << endl;
        }
    }
    return 0;
}