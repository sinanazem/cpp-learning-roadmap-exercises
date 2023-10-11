#include <iostream>
using namespace std;

int main(){
    int A[5], B[5], C[5];
    for (int i =0; i<=4; i++){
        cout << "A[" << i << "]= ";
        cin >> A[i];
        cout << "B[" << i << "]= ";
        cin >> B[i];
        C[i] = A[i] + B[i];
        cout << "C[" << i << "]= " << C[i] << endl;
    }
    return 0;
}