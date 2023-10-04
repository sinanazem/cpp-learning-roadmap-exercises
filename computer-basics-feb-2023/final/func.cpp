# include <iostream>

using namespace std;

double AVG(double x, double y, double z){
    double average = (x+y+z)/3;
    return average;

}

int main(){
    double x,y,z;
    cout << "Enter you numbers: ";
    cin >> x >> y >> z;
    cout << "AVG= "<< AVG(x,y,z);
    return 0;
}