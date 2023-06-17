# include <iostream>
using namespace std;

// This function retun star
void star(){
    cout << "*****************" << endl;
}

// This function doesn't have return because is void
void sum_1(float num1, float num2){
    cout << num1+num2;
}

// This function have return because is float
float sum_2(float num1,float num2){
    return num1+num2;
}

int main(){
    float x,y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    star();
    cout << x << " + " << y<<" = ";
    cout << sum_2(x, y) << endl;
    return 0;
}