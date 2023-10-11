#include <iostream>
using namespace std;

int main(){
    int A[5], temp;
    for (int i=0; i<=3; i++){
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }

    for (int i=0; i<=2; i++){
        for (int j=i+1; j<=3; j++){
            if (A[i] > A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;


            }
        }

        }
    for (int i=0; i<=3; i++){
        cout << A[i] << " ";
    }
    return 0;
}