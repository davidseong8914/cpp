#include <iostream>
#include <vector>

void intro() {
    std::cout << "Welcome to TIC TAC TOE the C++ based text game!\n";
    std::cout << "Take turns choosing a grid to mark till you have 3 in a row!\n";
    std::cout << "** grid is indexed as follows **\n";
    std::cout << " 1 | 2 | 3 \n";
    std::cout << " 4 | 5 | 6 \n";
    std::cout << " 7 | 8 | 9 \n";

    std::cout << "\n\n Good Luck!!\n";

}

std::vector<int> turn(std::vector<int> player, std::string player_name, std::vector<int> player2) {
    int mark;
    bool mark_check = false;
    bool mark_check2 = true;
    bool mark_check3 = true;

    std::cout << "It's your turn " << player_name << std::endl;
    std::cin >> mark;

    while (mark_check == false) {
        for (int i = 0; i < player.size(); i++) {
            if (player[i] == mark) {
                mark_check2 = false;
            } else {
                mark_check2 = true;
            }
        }

        for (int i = 0; i < player2.size(); i++) {
            if (player2[i] == mark) {
                mark_check3 = false;
            } else {
                mark_check3 = true;
            }
        }

        if (mark_check2 && mark_check3) {
            mark_check = true;
        } else {
            std::cout << "space already taken, please mark a different location\n";
            std::cin >> mark;
        }
    }
    
    // int last_num = mark.size() - 1;
    std::cout << mark << std::endl;
    player.push_back(mark);
    return player;
}

void status_display(std::string ttt) {
    std::cout << " " << ttt[0] << " | " << ttt[1] << " | " << ttt[2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << ttt[3] << " | " << ttt[4] << " | " << ttt[5] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << ttt[6] << " | " << ttt[7] << " | " << ttt[8] << std::endl;
}

std::string display_grid(std::vector<int> player1, std::vector<int> player2) {
    std::string row1 = "   ";
    std::string row2 = "   ";
    std::string row3 = "   ";

    for (int i = 0; i < player1.size(); i++) {
        if (player1[i] < 4) {
            row1[player1[i] - 1 ] = 'O';
        } else if (player1[i] < 7) {
            row2[player1[i] - 4] = 'O';
        } else if (player1[i] < 10) {
            row3[player1[i] - 7] = 'O';
        }
    }

    for (int i = 0; i < player2.size(); i++) {
        if (player2[i] < 4) {
            row1[player2[i] - 1 ] = 'X';
        } else if (player2[i] < 7) {
            row2[player2[i] - 4] = 'X';
        } else if (player2[i] < 10) {
            row3[player2[i] - 7] = 'X';
        }
    }
    
    status_display(row1 + row2 + row3);
    return(row1 + row2 + row3);
}

bool winner_checker(std::string winner){
    bool game_status = true;
    int count = 0;
    for (int i = 0; i < winner.size(); i++) {
        if (winner[i] == ' ') {
            count++;
        }
    }
    std::cout << count << std::endl;

    // 8 scenarios
    if (
        // row 
        winner[0] == winner[1] && winner[0] == winner[2] && winner[0] != ' ' ||
        winner[3] == winner[4] && winner[3] == winner[5] && winner[3] != ' ' ||
        winner[6] == winner[7] && winner[6] == winner[8] && winner[6] != ' ' ||
        
        // column
        winner[0] == winner[3] && winner[0] == winner[6] && winner[0] != ' ' ||
        winner[1] == winner[4] && winner[1] == winner[7] && winner[1] != ' ' ||
        winner[2] == winner[5] && winner[2] == winner[8] && winner[2] != ' ' ||

        // diagonal
        winner[0] == winner[4] && winner[0] == winner[8] ||
        winner[2] == winner[4] && winner[0] == winner[6]
        )
        {
        game_status = false;
        }
        return game_status;
}

