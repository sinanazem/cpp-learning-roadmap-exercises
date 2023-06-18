# include <iostream>

using namespace std;

int main(){
    float A[2][4],B[2][4],C[2][4];
    int i,j;
    for (i=0;i<2;i++){
        for (j=0;j<4;j++){
            cout << "A["<<i<<"]["<<j<<"]= ";
            cin >> A[i][j];
            cout << "B["<<i<<"]["<<j<<"]= ";
            cin >> B[i][j];
            C[i][j] = (A[i][j]+B[i][j])/2;
            cout << "A["<<i<<"]["<<j<<"]= "<<C[i][j]<<endl;
        }
    }
    return 0;
}