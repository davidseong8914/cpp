#include <iostream>

int main() {
    int weight;
    double result_weight;

    double mercury = 0.38;
    double venus = 0.91;
    double mars = 0.38;
    double jupiter = 2.34;
    double saturn = 1.06;
    double uranus = 0.92;
    double neptune = 1.19;

    int num_planet;

    std::cout << "What is your weight?\n";
    std::cin >> weight;

    std::cout << "Which planet do you want to fight on\n?";
    std::cout << "1. Mercury\n2. Venus\n3. Mars\n4. Jupiter\n5. Saturn\n6. Uranus\n7. Neptune\n";

    std::cin >> num_planet;

    switch (num_planet) {
        case 1:
            result_weight =  mercury * weight;
        case 2:
            result_weight = venus * weight;
        case 3:
            result_weight = mars * weight;
        case 4:
            result_weight = jupiter * weight;
        case 5:
            result_weight = saturn * weight;
        case 6:
            result_weight = uranus * weight;
        case 7:
            result_weight = neptune * weight;

        
    std::cout << "weight on destination planet " << result_weight << "\n";


    }
    




}