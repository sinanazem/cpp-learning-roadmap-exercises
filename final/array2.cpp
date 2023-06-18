# include <iostream>

using namespace std;

int main(){
    float scores[10];
    int i;
    cin >> scores;
    for (i=0; i<10; i++){
        cin >> scores[i];
    }

    for (i=0; i<10; i++){
        cout << scores[i] << " ";
    }
    return 0;
}