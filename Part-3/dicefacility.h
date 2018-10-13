/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */

/**
 * This is the header file for part 3 which implements the dicefacility
 */

#ifndef COMP_345_PROJECT_DICE_H
#define COMP_345_PROJECT_DICE_H

#include <vector>
#include <random>

/**
 * Defines a dice structure
 */
struct dice {
/**
 * Creates a dice object, and randomizes the rolling results by using the system current time with a random long
 */
    dice() {
        srand(static_cast<unsigned int>(time(nullptr) * random()));
    }

/**
 * Rolls the dice, and returns the result as an integer between [1,6]
 * @return the result of a roll in the range of [1,6]
 */
    int roll() {
        return rand() % 6 + 1;
    }
};

/**
 * Defines the faces of a dice as constants
 * Also used as a translator
 */
struct dice_constants {
    std::string const data[6] = {"Energy", "Attack", "Destruction", "Heal", "Celebrity", "Ouch!"};
};

/**
 * Creates a DiceFacility interface for players wishing to roll between 1-6 dices
 */
class dicefacility {
    std::vector<int> die;
    int max;
    int curr;
    std::string hlogg;
    dice *d;
    dice_constants *constants;

    void logging();

public:
/**
 * Default Constructor
 */
    dicefacility();

/**
 * Rolls all 6 die
 */
    void rollAll();

/**
 * Rolls only the die represented by the string (as an integer)
 */
    void roll(std::string &s);

/**
 * Returns the results of the current roll
 */
    const std::string to_string();

/**
 * Returns the history of the rolls
 */
    const std::string history();
};

#endif