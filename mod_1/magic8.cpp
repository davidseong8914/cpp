#include <iostream>
#include <cstdlib>

int main () {

    std::string ball;

    srand(time(NULL)); // sets "seed" of the random number generator
    int answer = std::rand() % 10;

    // if else
    // if (answer == 0) {
    //     std::cout << "it is certain\n";
    // } else if (answer == 1) {
    //     std::cout << "without a doubt\n";
    // } else if (answer == 2) {
    //     std::cout << "most likely\n";
    // } else if (answer == 3) {
    //     std::cout << "don't count on it\n";
    // } else {
    //     std::cout << "try again\n";
    // }

    // switch
    switch (answer) {
        case 0:
            std::cout << "it is certain\n";
            break;
        case 1:
            std::cout << "without a doubt\n";
            break;
        case 2:
            std::cout << "most likely\n";
            break;
        case 3:
            std::cout << "don't count on it\n";
            break;
        case 4:
            std::cout << "cannot predict now\n";
            break;
        default:
            std::cout << "try again\n";
            break;
    }
    // added to end code after one run
    return 0;
}