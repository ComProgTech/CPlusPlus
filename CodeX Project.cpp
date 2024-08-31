#include <iostream>
#include <cstdlib>
#include <ctime>   

int main() {
    
    std::srand(std::time(nullptr));

    
    int numberToGuess = std::rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";


    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again.\n";
        } else if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (userGuess != numberToGuess);

    return 0;
}