#include <iostream>

int main() {

    int age = 10;

    try{
        if (age < 5) {
            std::cout << "you kid";
        } else {
            throw std::string("can i do this?");
        }
    } catch (std::string phrase) {
        std::cout << phrase;
    }

}