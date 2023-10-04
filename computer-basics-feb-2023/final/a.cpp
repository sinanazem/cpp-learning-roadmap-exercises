# include <iostream>

using namespace std;

int main(){
    float scores[10],temp;
    int i,j;
    for (i=0; i<10; i++){
        cin >> scores[i];
    }
    for (i=0; i<9; i++){
        for (j=i+1; j<10; j++){
            if (scores[i] < scores[j]){
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;

            }
        }
    }

    for (i=0; i<3; i++){
        cout << scores[i] << " ";
    }
    return 0;
}