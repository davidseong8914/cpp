#include <iostream>

int main() {
  double earth_mass;
  double mars_mass;
  // Add your code below  
  std::cout << "Please enter the weight of your item\n";
  std::cin >> earth_mass;

  mars_mass = earth_mass / 3;
  std::cout << "Your item weighs " << mars_mass << " on Mars\n";

}