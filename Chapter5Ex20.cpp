/*
Program Title: Chapter5Ex20
Programmer: Josh Richards
Date: November 21, 2024
Requirements:

Write a program that generates a random number and asks the user to guess what the number is.

If the user’s guess is higher than the random number, the program should display “Too high, try again.”

If the user’s guess is lower than the random number, the program should display “Too low, try again.”

The program should use a loop that repeats until the user correctly guesses the random number.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int getUserGuess() {
    int guess;
    cout << "Enter your guess: ";
    cin >> guess;
    return guess;
}

bool checkGuess(int guess, int randomNumber) {
    if (guess > randomNumber) {
        cout << "Too high, try again." << endl;
        return false;
    }
    else if (guess < randomNumber) {
        cout << "Too low, try again." << endl;
    }
    else {
        cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
        return true;
    }
}

void playGuessingGame() {
    int randomNumber = generateRandomNumber(1, 10);
    int userGuess = 0;
    bool guessedCorrectly = false;

    cout << "Guess the number (between 1 and 10):" << endl;

    while (!guessedCorrectly) {
        userGuess = getUserGuess();
        guessedCorrectly = checkGuess(userGuess, randomNumber);
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = generateRandomNumber(1, 10);
    int userGuess;
    bool guessedCorrectly = false;

    cout << "Guess the number (between 1 and 10):" << endl;

    while (!guessedCorrectly) {
        userGuess = getUserGuess();
        guessedCorrectly = checkGuess(userGuess, randomNumber);
    }
    return 0;
}