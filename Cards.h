enum class Suit;
enum class Rank;

namespace Constants {
    constexpr int CARD_COUNT{ 52 };
    constexpr int NUM_RANKS{ 13 };
    constexpr int NUM_SUITS{ 4 };
}

#ifndef CARDS
    #define CARDS

    #include "Utility.h"

    // Pick a random card form the deck (represented by an int between 0-52)
    // - params: none
    // - return: an int between 0 - 51
    // pickRandomCard();
    int pickRandomCard();

    // Get the rank of a specific card index
    // - param 1: an int representing the card index
    // - return: an enum representing the Rank of the card index given.
    // getRank();
    Rank getRank(int cardIndex); 

    // Get the string version of a specific rank
    // - param 1: a Rank object
    // - return: a string representing the name of the rank
    std::string getRankString(Rank rank);

    // Get the string version of a specific rank
    // - param 1: an int representing the rank (0-12)
    // - return: a string representing the name of the rank
    std::string getRankString(int rank);

    // Get the suit of a specific card index
    // - param 1: an int representing the card index
    // - return: an enum representing the Suit of the card index given.
    // getSuit();
    Suit getSuit(int cardIndex);

    // Get the string version of a specific suit
    // - param 1: a Suit object
    // - return: a string representing the name of the suit
    std::string getSuitString(Suit suit);

    // Get the string version of a specific suit
    // - param 1: an int representing the suit (0-3)
    // - return: a string representing the name of the suit
    std::string getSuitString(int suit);

    // A function to assess whether all elements in a boolean array are true
    // You can use this function to determine whether all suits have been picked.
    // - param 1: a const array of boolean values.
    // - param 2: the size of the boolean array passed in param 1.
    // - return: a bool : true if ALL the elements in param 1 are true, false otherwise.
    // allArrayElementsAreTrue();
    bool allArrayElementsAreTrue(const bool *boolArray, const int size);

    // This is the function that does all the work behind solving the problem (including sending output to the console)
    // This function should create/use an array of Boolean values (all initially false) to represent the suits that have been picked
    // It should make use of allArrayElementsAreTrue() to test if all suits have been picked.
    // - param 1: a bool called "verbose" (meaning wordy) that defaults to true.
    //      If verbose is true, generate output cards picked & the pick count.
    // - return: an int representing the number of card picks it takes to cover 4 suits.
    // getPickCountNeededForFourSuits();
    int getPickCountNeededForFourSuits(bool verbose = true);

#endif