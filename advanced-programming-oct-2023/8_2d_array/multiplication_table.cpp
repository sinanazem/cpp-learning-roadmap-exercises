#include <iostream>
using namespace std;

int main(){
    int A[4][4];
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            A[i][j] = (i+1)*(j+1);
        }
    }
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cout << "A[" << i << "][" << j << "]= " << A[i][j] << endl;
        }
    }
    return 0;
}