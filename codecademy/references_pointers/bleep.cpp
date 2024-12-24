#include <iostream>
#include <string>
#include "functions.hpp"

int main() {
    std::string word = "broccoli";
    std::string text = "broccoli likes its other friend broccoli because it is also a broccoli";

    bleep(word, text);
    std::cout << word << std::endl;
    std::cout << text;
}