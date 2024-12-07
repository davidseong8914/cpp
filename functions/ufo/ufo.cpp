#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() {
    std::string codeword = "codeacademy";
    std::string answer = "___________";
    int misses = 0; 

    greet();

    std::vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < 7) {

        display_misses(misses);
        std::cout << "Incorrect Guesses: ";

        display_status(incorrect, answer);

        std::cout << "\nPlease enter your guess:";
        std::cin >> letter;

        for (int i = 0; i < codeword.size(); i++) {
            if (letter == codeword[i]) {
                answer[i] = letter;
                guess = true;
            }
        }

        if (guess == true) {
            std::cout << "Correct!\n";
        } else {
            std::cout << "Incorrect! The tractor beam pulls the person in further\n";
            incorrect.push_back(letter);
            misses++;
        }

        guess = false;

    }

    end_game(answer, codeword);


}
