#include <iostream>
using namespace std;

int main(){
    float score;
    cin >> score;
    if (score >= 90){
        cout << "A";
    }
    else if (score >= 80){
        cout << "B";
    }
    else if (score >= 70){
        cout << "C";
    }
    else if (score < 70){
        cout << "D";
    }
    return 0;
}