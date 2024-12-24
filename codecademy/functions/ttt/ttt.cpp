#include <iostream>
#include "t_fn.hpp"
#include <vector>

int main() {
    char slots[9];
    bool game_status = true;
    std::vector<int> player1;
    std::vector<int> player2;
    std::string winner;

    intro();

    while (game_status != false) {
        display_grid(player1, player2);
        player1 = turn(player1, "player 1 (O)", player2);
        winner = display_grid(player1, player2);

        // game ending scenario - tic tac toe
        game_status = winner_checker(winner);
        if (game_status == false){
            std::cout << "Game Over!!\n";
            return 0;
        }

        // game ending scenario - 9th turn
        if (player1.size() + player2.size() == 9) {
            std::cout << "GAME OVER! it's a TIE!!!\n";
            // game_status = false;
            return 0;
        }
        
        player2 = turn(player2, "player 2 (X)", player1);
        winner = display_grid(player1, player2);
        game_status = winner_checker(winner);
        if (game_status == false){
            std::cout << "Game Over!!\n";
            return 0;
        }

    }

    std::cout << "Game over!";
}