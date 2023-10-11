# include <iostream>
using namespace std;

int main(){
    int A[10];
    for (int i=0; i<=9; i++){
        A[i] = i;
    }
    for (int i=0; i<=9; i++){
        cout << A[i] << "\t";
    }
    return 0;
}