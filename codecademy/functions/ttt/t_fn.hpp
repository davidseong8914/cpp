#include <vector>

void intro();
std::string display_grid(std::vector<int> player1, std::vector<int> player2);
std::vector<int> turn(std::vector<int> player, std::string player_name, std::vector<int> player2);
void status_display(std::string ttt);
bool winner_checker(std::string winner);