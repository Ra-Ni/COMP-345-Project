/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */

/**
 * This is the main file for part 3 which implements the dicefacility
 */

#include "dicefacility.h"
#include <iostream>
#include <string>
#include <functional>

/**
 *Default Constructor for creation of dicefacility objects
 */
dicefacility::dicefacility() {
    constants = new dice_constants{};
    d = new dice{};  //Creates dice object which gives random side
    for (int i = 0; i < 6; i++) {
        die.emplace_back(d->roll());
    }
    max = 3;
    curr = 1;
    logging();
}

/**
 * Rolls all 6 die while keeping track of number of times a player is allowed to roll
 */
void dicefacility::rollAll() {
    if (curr >= max) {
        std::cout << "Cannot roll anymore" << std::endl;
        return;
    }
    for (int &i : die) {
        i = d->roll();
    }
    curr++;
    logging();
}

/**
 * Rolls only the die represented by the string (as an integer)
 * @param s A number of type string (as an integer) which relevant to the dice number
 */
void dicefacility::roll(std::string &s) {
    std::vector<bool> visited(sizeof(die) / sizeof(int), false);
    if (curr >= max) {
        std::cout << "Cannot roll anymore" << std::endl;
    }
    for (char in : s) {
        if (in < '0' || in > '6' || visited[in - 48]) {
            continue;
        }
        die[in - 48] = d->roll();
        visited[in - 48] = true;
    }
    curr++;
    logging();
}

/**
 * ToString method to be used by any object of dicefacility
 * @return The results of the current roll
 */
const std::string dicefacility::to_string() {
    int i = 0;
    std::string s = "\n";
    for (int in : die) {
        s += constants->data[in - 1] + '(' + std::to_string(i++) + ")\n";
    }
    return s;
}
//todo please check this method documentation:
/**
 * Keeps track of dice sides after rolling
 */
void dicefacility::logging() {
    hlogg += ("Roll #") + std::to_string(curr) + ": ";
    for (int i : die) {
        hlogg += std::to_string(i) + " ";
    }
    hlogg += '\n';
}

/**
 * Returns a statement as a string for the history of the rolls
 * @return The history of the rolls
 */
const std::string dicefacility::history() {
    return hlogg;
}