# include <iostream>

using namespace std;
void star(){
    cout << "*************"<<endl;
}
int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    star();
    cout << name << endl;
    star();
    return 0;
}