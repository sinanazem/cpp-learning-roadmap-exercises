#include <iostream>
using namespace std;
int fact(int number){
    int f=1;
    for (int i=1; i<=number; i++){
        f *= i;

    }
    return f;
}

int main(){
    cout << fact(4);

    return 0;
}