//This is the main file for part 2 which implements the dicefacility
/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */

#include "dice.h"
#include <iostream>
#include <string>
#include <functional>


/**
 *  makes a new dice object, rolls and then adds it to the die vector
 */
dicefacility::dicefacility() {
    constants = new dice_constants{};
    d = new dice{};
    for (int i = 0; i < 6; i++) {
        die.emplace_back(d->roll());
    }
    max = 3;
    curr = 1;
    logging();
}
/**
 *  rolling all the dice
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
 * ????
 * @param s
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
 * prints the sides
 */
void dicefacility::print() {
    int i = 0;
    std::cout << std::endl;
    for (int in : die) {
        std::cout << constants->data[in - 1] << '(' << i++ << ')' << std::endl;
    }
}

/**
 * to keep track of dice sides after rolling
 */
void dicefacility::logging() {
    hlogg += ("Roll #") + std::to_string(curr) + ": ";
    for (int i : die) {
        hlogg += std::to_string(i) + " ";
    }
    hlogg += '\n';
}

/**
 * shows the record of dice
 */
void dicefacility::history() {
    std::cout << hlogg << std::endl;
}