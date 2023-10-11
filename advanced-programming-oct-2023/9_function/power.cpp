#include <iostream>

using namespace std;

int power(int m, int n){
    int p = 1;
    for (int i=0; i<n; i++){
        p *= m;
    }
    return p;
}
int main(){
    int num1 = 3;
    int num2 = 2;
    cout << power(num1, num2);
    return 0;
}