#include "dicefacility.h"
#include <iostream>
#include <string>
#include <functional>

/**
 *
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

const std::string dicefacility::to_string() {
    int i = 0;
    std::string s = "\n";
    for (int in : die) {
        s += constants->data[in - 1] + '(' + std::to_string(i++) + ")\n";
    }
    return s;
}

void dicefacility::logging() {
    hlogg += ("Roll #") + std::to_string(curr) + ": ";
    for (int i : die) {
        hlogg += std::to_string(i) + " ";
    }
    hlogg += '\n';
}

const std::string dicefacility::history() {
    return hlogg;
}