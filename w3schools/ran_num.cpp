#include <iostream>
#include <ctime>
int main() {
    // random number 
    int random = rand();

    // random number between 0 ~ 100
    int ran_bel = rand() % 101;

    // random number that changes everytime
    srand(time(0));
    int dir_rand = rand() % 1000;


    std::cout << random << std::endl;
    std::cout << ran_bel << std::endl;
    std::cout << dir_rand << std::endl;

}