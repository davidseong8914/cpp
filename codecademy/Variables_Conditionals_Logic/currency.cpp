#include <iostream>

int main() {

    double pesos;
    double reais;
    double soles;

    double pesos_usd = 0.049;
    double reais_usd = 0.17;
    double soles_usd = 0.26759;

    double dollars;

    std::cout << "Enter number of Colombian Pesos: \n";
    std::cin >> pesos;

    std::cout << "Enter number of Brazilian Reais: \n";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles: \n";
    std::cin >> soles;
    
    dollars = pesos * pesos_usd + reais * reais_usd + soles * soles_usd;

    std::cout << "US Dollars = $" << dollars << "\n";

}