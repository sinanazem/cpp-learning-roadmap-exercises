#include <iostream>
using namespace std;

int main(){
    int number_of_star;
    cout << "Please Enter Number of Star: ";
    cin >> number_of_star;
    for (int i=0; i<number_of_star; i++){
        cout << "*" << endl;
    }
    return 0;
}