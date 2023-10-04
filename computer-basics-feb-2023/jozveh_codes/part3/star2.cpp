# include <iostream>

using namespace std;

int main(){
    int i,j;
    for (i=4; i>=1; i--){
        for (j=1; j<=i; j++){
            cout << "*";
        }
    cout << endl;
    }
    return 0;
}