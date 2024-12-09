#include <iostream>
#include "profile.hpp"
#include <vector>

int main() {


    Profile Sam("Sam Drakkila", 30, "New York", "USA", "he/him");
    
    Sam.add_hobby("listening to audiobooks and podcasts");
    Sam.add_hobby("playing rec sports like bowling and kicckball");
    Sam.add_hobby("writing a speculative fiction novel");
    Sam.add_hobby("reading advice columns");
    
    
    std::cout << Sam.view_profile();


    return 0;
}