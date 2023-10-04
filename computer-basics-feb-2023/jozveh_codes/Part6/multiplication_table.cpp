# include <iostream>

using namespace std;

int main(){
    int A[4][4],row,col;
    for (row=0;row<5;row++){
        for(col=0;col<5;col++){
            A[row][col] = row*col;
            cout << "A["<<row<<"]["<<col<<"]= "<<A[row][col]<<endl;
        }
    }
    return 0;
}