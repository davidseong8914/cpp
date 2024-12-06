#include <iostream>

int main() {

    // build a text adventure
    std::string pokemon;
    int num_poke;
    int level = 1;
    int mew_health = 10;
    int action;
    int next_step;
    std::string mode = "Adventure";

    std::cout << "Dr. Proctor: Welcome to Pokeland!\n";
    std::cout << "It's time for you to choose your pokemon\n";
    std::cout << "Choose carefully, he will be your partner for the rest of your life\n";

    std::cout << "1) Charmander\n2) Squirtle\n3) Bulbasaur\n\n";
    std::cin >> num_poke;
    if (num_poke == 1) {
        pokemon = "Charmander";
    } else if (num_poke == 2) {
        pokemon = "Squirtle";
    } else if (num_poke == 3) {
        pokemon = "Bulbasaur";
    } else {
        std::cout << "Invalid input\n";
    }

    std::cout << "You chose " << pokemon << "!!!\n\n";
    std::cout << "Dr.Proctor: Now, get out there and explore the world!\n";

    while (mode == "Adventure"){
        std::cout << ". . . .\n";
        std::cout << ". . . .\n";
        std::cout << ". . . .\n";

        std::cout << "You encountered a wild MEW!!!\n";

        while (mew_health > 0){
            std::cout << "Choose your next move.\n";

            std::cout << "1) Body Slam 2) Ask a very philosophical question 3) Take a nap\n";
            std::cin >> action;
            if (action == 1) {
                mew_health = mew_health - 1 * level;
                std::cout << "BODY SLAM!!!!!!\n";
                std::cout << "move was super effective!\n";
                std::cout << "Mew's health is now at " << mew_health << ".\n";
            } else {
                std::cout << "Move has no effect on Mew...\n";
            }
        }

        mew_health = 10;
        std::cout << "You defeated MEW!\n";
        level++;
        std::cout << "Your level is now " << level << "\n";


        std::cout << "Dr. Proctor: Wow son! You've grown!\n";
        std::cout << "Dr. Proctor: You must choose your path now.\n";
        std::cout << "1) I want to train more!\n2) I shall leave the Leaf Village to become the next Hokage\n3) Wo.\n";
        std::cin >> next_step;

        if (next_step == 1) {
            // mode = "Adventure";
            ;
        } else if (next_step == 2) {
            mode = "Hokage";
        } else if (next_step == 3) {
            mode = "Snorlax";
        } else {
            std::cout << "Invalid input\n";
        }

    }

    if (mode == "Hokage") {
        std::cout << "Dr.Proctor: Good choice son. Get out there! Be safe! Catchem all!\n";
    } else if (mode == "Snorlax"){
        for (int i = 0; i < 3; i++){
            std::cout << "uh,,,\n";
        }
        std::cout << "dang... it was all just a dream\n";
    }

}