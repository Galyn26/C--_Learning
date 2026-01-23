//Title: Game	Number Guessing	
//Description: Write a program that generates a random number between 1 and 100 and asks the user to guess the number. 
//Provide feedback to the user (e.g., "Too high" or "Too low") until they guess the correct number.	

#include <iostream>
#include <cmath>

int main () {
    int numberToGuess = rand() % 100 + 1; // Generate random number between 1 and 100
    int userGuess = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100. Can you guess it?" << std::endl;

    while (userGuess != numberToGuess) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the correct number: " << numberToGuess << std::endl;
        }
    }

    return 0;
}