# include <iostream>

using namespace std;

int main(){
    int A[4][4],i,j;
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            A[i][j] = (i+1)*(j+1);
            cout << A[i][j] << " ";
        }
    cout << endl;
    }
    return 0;
}