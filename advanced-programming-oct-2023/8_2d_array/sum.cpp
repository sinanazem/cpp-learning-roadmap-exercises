#include <iostream>
using namespace std;

int main(){
    int A[3][5], B[3][5], C[3][5];
    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            cout << "A[" << i << "][" << j << "]= ";
            cin >> A[i][j];
            cout << "B[" << i << "][" << j << "]= ";
            cin >> B[i][j];

            C[i][j] = A[i][j] + B[i][j];
            cout << "C[" << i << "][" << j << "]= " << C[i][j] << endl;


        }
    }
    return 0;
}