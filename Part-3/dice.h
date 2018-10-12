/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */

#pragma once

#include <vector>
#include <random>

/**
 * Defining a dice structure
 */
struct dice { //creating dice, randomize the rolling results by using the system current time

    dice() {
        srand(static_cast<unsigned int>(time(nullptr) * random()));
    }

    int roll() {
        return rand() % 6 + 1;
    }
};

struct dice_constants { //Defining the side names as constants
    std::string const data[6] = {"Energy", "Attack", "Destruction", "Heal", "Celebrity", "Ouch!"};
};

class dicefacility {  //dicefacility class is where a dice is being implemented
    std::vector<int> die;
    int max; //maximum number of attempts
    int curr; //a counter for number of current attempts
    std::string hlogg;
    dice *d;
    dice_constants *constants;

    /// to keep track of dice sides after rolling
    void logging();

public:
    dicefacility(); // default constructor
    ~dicefacility(); //destructor

    /**
     * roll all the dice
     */
    void rollAll();


/**
 * ????
 * @param s
 */
    void roll(std::string &s);

    /**
     * prints the sides
     */
    void print();

/**
 * shows the record of dice
 */
    void history();
};