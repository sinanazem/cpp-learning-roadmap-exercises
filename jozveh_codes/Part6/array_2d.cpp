# include <iostream>

using namespace std;

int main(){
    int A[3][5],B[3][5],C[3][5],row,col;
    for (row=0; row<3; row++){
        for (col=0; col<5; col++){
            cout << "A["<<row<<"]["<<col<<"]= ";
            cin >> A[row][col];
            cout << "B["<<row<<"]["<<col<<"]= ";
            cin >> B[row][col];
            C[row][col] = A[row][col]+B[row][col];
            cout << "C["<<row<<"]["<<col<<"]= " << C[row][col]<<endl;
        }
    }
    return 0;
}