# include <iostream>

using namespace std;

int main(){
    int A[7],i,max;
    for (i=0; i<7; i++){
        cout << "A["<<i<<"]= ";
        cin >> A[i];
    }
    max = A[0];
    for (i=0; i<7; i++){
        if (max<A[i]){
            max = A[i];
        }
    }
    for (i=0; i<7; i++){
        cout << A[i] << "\t";
    }
    cout << endl;
    cout << "Max Number is: " << max;
    return 0;
}