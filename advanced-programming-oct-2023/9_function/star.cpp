#include <iostream>
using namespace std;

string print_star(){
    return "**************";
}

int main(){
    string name = "Sina";
    string last_name = "Nazem";

    cout << name << print_star() << last_name << endl;

    return 0;
}