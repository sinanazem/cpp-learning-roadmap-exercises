# include <iostream>

using namespace std;

int main(){
    float score;
    cout << "Enter math score: ";
    cin >> score;

    if (score>=19 && score <=20){
        cout << "Perfect"<<endl;
    }
    else if (score>=18 && score <19){
        cout << "very good"<<endl;
    }
    else if (score>=16 && score<18){
        cout << "good" <<endl;
    }
    else if (score >= 10 && score < 16){
        cout << "Acceptable and Pass" << endl;
    }
    else if (score>=0 && score<10){
        cout << "Reject" << endl;
    }

    else{
        cout << "not in range";
    }
    return 0;
}