#include <iostream>
#include <string>

//only works for dogs of age 2+

int main() {

    // dog info
    double dog_age;
    std::string dog_name;

    // first 2 years of dog years are equivalent to humans' 21 years
    int early_years = 21;
    // every year following the 2 years is equivalent to 4 human years
    int later_years;
    int human_years;

    std::cout << "Please input your dog's name\n";
    std::cin >> dog_name;

    std::cout << "Please input your dog's age\n";
    std::cin >> dog_age;

    later_years = (dog_age - 2) * 4;
    human_years = early_years + later_years;

    std::cout << "Dog name: " << dog_name << "Human Age: " << human_years << "\n";






}