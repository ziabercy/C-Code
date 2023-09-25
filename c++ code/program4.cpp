// Zia Bercy
// Purpose: Using while loops and if statements to create random number guessing game
// Input: guess of random number
// Output: if their guess is too low or too high or correct

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
// declare variables for random number calculation and guess for user input
    int randNum = rand() % 100 + 1;
    int guess;
// create while loop to take in user input and declare if statements for if the guess is too low or high or correct
    while (randNum != guess) {
        cout << "Guess the random number: ";
        cin >> guess;

        if (randNum < guess) {
            cout << "Too high, try again." << endl;
        }
        else if (randNum > guess) {
            cout << "Too low, try again." << endl;
        }
        else if (randNum == guess) {
            cout << "You guessed it!" << endl;
        }
    }




    return 0;
}