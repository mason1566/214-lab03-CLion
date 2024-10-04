#include <iostream>
#include "Cards.h"

int main() {
    srand( static_cast<unsigned int>(time(0))); // set random seed

    const int ITER_COUNT = 10000000; // The count of tests to conduct

    int totalCardsDrawn = 0;
    for (int i = 0; i < ITER_COUNT; i++) {
        totalCardsDrawn += getPickCountNeededForFourSuits(false, true);
    }
    std::cout << "Average cards drawn: " << (float) totalCardsDrawn / ITER_COUNT << std::endl;

    return 0;
}
