#include <iostream>
#include <string>
#include "functions.hpp"

void asterisk(std::string word, std::string &text, int i) {
    for (int j = 0; j < word.length(); j++) {
        text[i + j] = '*';

    }
}

void bleep(std::string word, std::string &text) {

    for (int i = 0; i <= text.length() - word.length(); i++) {
        int count = 0;
        for (int j = 0; j < word.length(); j++){
            if (text[i+j] == word[j]) {
                count++;
            }
        }
        if (count == word.length()){
            asterisk(word, text, i);
        }
    }
}