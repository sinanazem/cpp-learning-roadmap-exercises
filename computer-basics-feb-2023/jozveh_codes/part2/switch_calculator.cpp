# include <iostream>

using namespace std;

int main(){
    float num1, num2;
    char ch;
    cout << "Enter your statement: ";
    cin >> num1 >> ch >> num2;
    switch(ch){
        case '+': cout<< num1<<'+'<<num2<<"= "<<num1+num2<<endl;break;
        case '-': cout<< num1<<'-'<<num2<<"= "<<num1-num2<<endl;break;
        case '*': cout<< num1<<'*'<<num2<<"= "<<num1*num2<<endl;break;
        case '/': cout<< num1<<'/'<<num2<<"= "<<num1/num2<<endl;break;
        default: cout << "invalid input!"<<endl;

    }
    return 0;
}