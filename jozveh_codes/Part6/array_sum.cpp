# include <iostream>

using namespace std;



int main(){
    int A[10],B[10],C[10],i;
    for (i=0;i<10; i++){
        cout << "A["<<i<<"]= ";
        cin >> A[i];
        cout << "B["<<i<<"]= ";
        cin >> B[i];
        C[i]=A[i]+B[i];
        cout << "C[" << i << "]= "<<C[i]<<endl;
    }
    cout << "A -> ";
    for (i=0; i<10; i++){
        cout << A[i] << "\t";
    }
    cout << endl;
    cout << "B -> ";
    for (i=0; i<10; i++){
        cout << B[i] << "\t";
    }
    cout << endl;
    cout << "C -> ";
    for (i=0; i<10; i++){
        cout << C[i] << "\t";
    }
    return 0;
 }