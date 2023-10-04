# include <iostream>

using namespace std;

int main(){
    int A[3][5], B[3][5],i,j;
    float C[3][5];
    for (i=0; i<3; i++){
        for (j=0; j<=5; j++){
            cout << "A["<<i<<"]["<<j<<"]= ";
            cin >> A[i][j];

            cout << "B["<<i<<"]["<<j<<"]= ";
            cin >> B[i][j];
            C[i][j] = (float)(A[i][j] + B[i][j])/2;
            cout << "C["<<i<<"]["<<j<<"]= "<<C[i][j]<<endl;
        }
    }

    return 0;
}