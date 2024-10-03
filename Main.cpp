#include <iostream>
#include "Cards.h"

int main() {
    srand( static_cast<unsigned int>(time(0))); // set random seed

    int pickCount = getPickCountNeededForFourSuits();
    std::cout << "Picks needed: " << pickCount << '\n';

    return 0;
}
