#include <iostream>
using namespace std;

int main(){
    int A[10], max;
    for (int i=0; i<=9; i++){
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }

    max = A[0];
    for (int i=0; i<=9; i++){
        if (max < A[i]){
            max = A[i];
        }
    }
    cout << "Max: " << max;
    return 0;
}