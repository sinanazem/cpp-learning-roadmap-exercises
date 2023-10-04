# include <iostream>

using namespace std;

int fact(int number){
    if (number == 0){
        return 1;
    }
    else{
        return number*fact(number-1);
    }

}

int pow(int number, int power){
    if (power == 0){
        return 1;
    }
    else{
        return number*pow(number,power-1);
    }
}

int main(){
    int x,y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << '('<<x<<'^'<<y<<')'<<'/'<<'('<<y<<"!)= "<<(float)pow(x,y)/fact(y)<<endl;

    return 0;
}