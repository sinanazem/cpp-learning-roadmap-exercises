#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(0));

    int secretNumber = rand() %100 + 1;
    int guess;
    int tries=0;

    cout << "Welcome to the Number Guessing Game! "<<endl;
    do{
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber){
            cout << "Too high! Try again!" << endl;
        }
        else if(guess < secretNumber){
            cout << "Too low! Try again!" << endl;
        }
        else{
            cout << "Congratulations! \nNumber od Tries: "<< tries;
        }
    }while(guess != secretNumber);

    return 0;
}