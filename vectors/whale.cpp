#include <iostream>
#include <vector>
#include <string>

int main() {

    std::string phrase = "turpentine and turtles";
    std::vector<char> vowels;
    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');

    std::vector<char> result;

    for (int i = 0; i < phrase.size(); i++) {
        for (int j = 0; j < vowels.size(); j++) {
            if (phrase[i] == vowels[j]) {
                if (phrase[i] == 'e' || phrase[i] == 'u') {
                    result.push_back(phrase[i]);
                    result.push_back(phrase[i]);
                } else{
                    result.push_back(phrase[i]);
                }
            }
        }

    }
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
    }

}