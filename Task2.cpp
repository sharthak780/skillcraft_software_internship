#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    cout << "Guess the Number Game!\n";
    cout << "I have selected a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed it in " << attempts << " attempts.\n";
        }

    } while (userGuess != randomNumber);

    return 0;
}
