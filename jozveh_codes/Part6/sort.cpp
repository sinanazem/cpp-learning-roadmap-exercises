# include <iostream>

using namespace std;

int main(){
    int A[4],i,j,temp;
    for (i=0; i<4; i++){
        cout << "A["<<i<<"]= ";
        cin >> A[i];
    }

    cout << "Before Sort: "<< endl;
    for (i=0; i<4; i++){
        cout << A[i] << "\t";
    }
    for (i=0; i<3; i++){
        for (j=i+1; j<4; j++){
            if (A[i] > A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;

            }
        }
    }
    cout << endl;
    cout << "After Sort: "<< endl;
    for (i=0; i<4; i++){
        cout << A[i] << "\t";
    }
    cout << endl;
    return 0;
}