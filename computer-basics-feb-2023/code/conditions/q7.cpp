# include <iostream>

using namespace std;

int main(){
    float side1, side2, side3;
    cout << "Enter sides: " ;
    cin >> side1 >> side2 >> side3;

    if (side1==side2 && side2==side3){
        cout << "motasavialzlae";
    }
    else if(side1==side2 || side1==side3 || side2 == side3){
        cout << "motasavialsaghain";
    }
    else{
        cout << "mokhtalfazlae";
    }
    return 0;
}