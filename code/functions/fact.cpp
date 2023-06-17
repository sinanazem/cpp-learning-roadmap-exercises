# include <iostream>

using namespace std;
int fact(int y){
    int f=1;
    for(int i=1;i<=y;i++){
        f = f*i;

    }
    return f;

}
int main(){
    int number;
    cout << "Enter The Number: "
    cin >> number;
    cout << "Factoral is: " << fact(number);

    return 0;
}