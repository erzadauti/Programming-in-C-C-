/*CH-230-A
A9p5.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    /* Initialize the random number generator with the current time */
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    /* Generate a random number between 1 and 100 */
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

    /* Display a welcome message to the user */
    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100. Try to guess it." << std::endl;

    /* Start the guessing loop */
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess; 
        attempts++; 

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl; /* Inform the user that the guess is too low */
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl; /* Inform the user that the guess is too high */
        } else {
            /* Congratulations message when the guess is correct, also displaying the number of attempts */
            std::cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in " << attempts << " attempts." << std::endl;
           
           /* Exit the loop when the guess is correct */
            break; 
        }
    }

    return 0;
}
