#include <iostream>
#include <stdlib.h>

int main() {
    // live long and prosper - Spock
    srand (time(NULL));

    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << "=====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "=====================\n";
    std::cout << "1) rock\n2) paper\n3) scissors\n";
    std::cout << "shoot!\n";

    std::cin >> user;

    // if (computer == user) {
    //     std::cout << "Tie! Try again\n";
    // } else if (computer == 1 && user == 2 ){
    //     std::cout << "You win!\n";
    // } else if (computer == 2 && user == 3) {
    //     std::cout << "You win!\n";
    // } else if (computer == 3 && user == 1) {
    //     std::cout << "You win!\n";
    // } else {
    //     std::cout << "You lose!\n";
    // }

    if (computer == user) {
        std::cout << "Tie! Try again\n";
    } else if (computer == 1 && user == 2 || computer == 2 && user == 3 || computer == 3 && user == 1){
        std::cout << "You win!\n";
    } else {
        std::cout << "You lose!\n";
    }

}