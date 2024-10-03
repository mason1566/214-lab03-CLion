#include "Utility.h"

// Pick a random number in range (inclusive)
// - param 1: The minimum value
// - param 2: The maximum value
// - return: a number falling between the minimum and maximum parameters (inclusive) 
int pickRandomNumberInRange(int min, int max) { 
    return min + (rand() % (max + 1 - min)); 
}