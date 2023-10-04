# include <iostream>

using namespace std;

int main(){
    int A[4],B[4],C[4],i;
    for(i=0;i<4;i++){
        cout << "Enter A" << '[' << i << ']' << ": ";
        cin >> A[i];
        cout << "Enter B" << '[' << i << ']' << ": ";
        cin >> B[i];
        cout << "C" << '[' << i << ']' << "= "<< A[i]+B[i]<<endl;
    }
    return 0;
}