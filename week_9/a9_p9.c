/*CH-230-A
A9p9.c
Erza Dauti
edauti@constructor.university
*/


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


/* Replace vowels with underscores */
std::string replaceVowelsWithUnderscores(const std::string& word) {
    std::string result = word;
    for (char& c : result) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            c = '_';
        }
    }
    return result;
}

int main() {
    std::string words[] = {"computer", "television", "keyboard", "laptop", "mouse", 
                          "butterfly", "book", "sunshine", "elephant", "guitar", 
                          "flamingo", "dolphin", "penguin", "airplane", "chocolate",
                          "umbrella", "sunflower"};

    const int numWords = 17;
    int randomIndex;
    int numberOfTries;

    /* Seed the random number generator */
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    do {
        /* Select a word from the array at random */
        randomIndex = std::rand() % numWords;
        std::string selectedWord = words[randomIndex];
        std::string hiddenWord = replaceVowelsWithUnderscores(selectedWord);

        numberOfTries = 0;

        std::cout << "Guess the word: " << hiddenWord << std::endl;

        std::string playerGuess;
        while (true) {
            std::cout << "Enter your guess (or 'quit' to exit): ";
            std::cin >> playerGuess;

            if (playerGuess == "quit") {
                break;
            }

            numberOfTries++;

            if (playerGuess == selectedWord) {
                std::cout << "Congratulations! You guessed the word '" << selectedWord << "' in " << numberOfTries << " tries." << std::endl;
                break;
            } else {
                std::cout << "Incorrect guess. Try again." << std::endl;
            }
        }

        std::cout << "Do you want to play again? (yes/no): ";
        std::string playAgain;
        std::cin >> playAgain;

        if (playAgain != "yes") {
            break;
        }
    } while (true);

    std::cout << "Thanks for playing the word guessing game. Goodbye!" << std::endl;

    return 0;
}

