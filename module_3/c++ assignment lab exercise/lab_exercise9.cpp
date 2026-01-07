#include <iostream>
using namespace std;

int main() {
    int winningNumber = 20;
	   
    int guess;

    cout << "Guess the number between 1 and 100\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > winningNumber) {
            cout << "Too high! Try again.\n";
        }
        else if (guess < winningNumber) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "Correct! You won the game.\n";
            break;
        }
    }

    return 0;
}

