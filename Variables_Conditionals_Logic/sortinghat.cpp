#include <iostream>

int main() {
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1;
  int answer2;
  int answer3;
  int answer4;

  std::cout << "The Sorting Hat Quiz!\n";

  std::cout << "Q1) When I am dead, I want people to remember me as: \n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";
  std::cin >> answer1;

  /* switch method
  switch (answer1) {
    case 1:
        hufflepuff += 1;
    case 2:
        slytherin += 1;
    case 3:
        ravenclaw += 1;
    case 4:
        gryffindor += 1;
    default:
        std::cout << "Invalid Input\n";
  }
  */
 if (answer1 == 1) {
    hufflepuff += 1;
 } else if (answer1 == 2) {
    slytherin += 1;
 } else if (answer1 == 3) {
    ravenclaw += 1;
 } else if (answer1 == 4) {
    gryffindor += 1;
 } else {
    std::cout << "Invalid input\n";
 }

 std::cout << "Q2) Dawn or Dusk? \n";
 std::cout << "1) Dawn\n";
 std::cout << "2) Dusk\n";

 std::cin >> answer2;

 if (answer2 == 1) {
    gryffindor += 1;
    ravenclaw += 1;
 } else if (answer2 == 2) {
    hufflepuff += 1;
    slytherin += 1;
 } else {
    std::cout << "Invalid input\n";
 }

 std::cout << "Q3) Which kind of instrument most pleases your ear? \n";
 std::cout << "1) the violin\n2) The trumpet\n3) The Piano\n4) The drum\n";
 std::cin >> answer3;

 if (answer3 == 1) {
    slytherin += 1;
 } else if (answer3 == 2) {
    hufflepuff += 1;
 } else if (answer3 == 3) {
    ravenclaw += 1;
 } else if (answer3 == 4) {
    gryffindor += 1;
 } else {
    std::cout << "Invalid input\n";
 }

std::cout << "Q4) Which road tempts you most? \n";
std::cout << "1) The wide, sunny grassy lane\n2) The narrow, dark, lantern-lit alley\n3) The twisting, leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)\n";
std::cin >> answer4;

if (answer4 == 1) {
    hufflepuff += 1;
} else if (answer4 == 2) {
    slytherin += 1;
} else if (answer4 == 3) {
    gryffindor += 1;
} else if (answer4 == 4) {
    ravenclaw += 1;
} else {
    std::cout << "Invalid input\n";
}

std::string house1;
std::string house2;
int max1 = 0;
int max2 = 0;

if (gryffindor > slytherin) {
    max1 = gryffindor;
    house1 = "Gryffindor";
} else {
    max1 = slytherin;
    house1 = "Slytherin";
}

if (ravenclaw > hufflepuff) {
    max2 = ravenclaw;
    house2 = "Ravenclaw";
} else {
    max2 = hufflepuff;
    house2 = "Hufflepuff";
}

if (max1 > max2) {
    std::cout << house1 << "!\n";
} else {
    std::cout << house2 << "!\n";
}







}