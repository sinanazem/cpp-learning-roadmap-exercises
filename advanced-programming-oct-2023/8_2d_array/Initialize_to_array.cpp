#include <iostream>
using namespace std;

int main(){
    int A[3][5];

    for (int i=0; i<=2; i++){
        for (int j=0; j<=4; j++){
            cout << "A[" << i << "][" << j << "]= ";
            cin >> A[i][j];
        }
    }

    for (int i=0; i<=2; i++){
        for (int j=0; j<=4; j++){
            cout << A[i][j];
        }
    }
    return 0;
}