#include <iostream>
using namespace std;

int main(){
    int A[2][2];
    int count=0, target;
    cin >> target;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cin >> A[i][j];

        }
    }

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            if (A[i][j] == target){
                count ++;
            };

        }
    }
    cout << "number of " << "'"<< target << "'" << "in A is: " << count << endl; 
    return 0;
}