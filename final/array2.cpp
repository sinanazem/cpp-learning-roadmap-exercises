#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int tries = 0;

    cout << "Welcome to The Number Guessing Game" << endl;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << tries << "  tries." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
























