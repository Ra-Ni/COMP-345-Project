#pragma once

#include <vector>
#include <random>

struct dice {

    dice() {
        srand(static_cast<unsigned int>(time(nullptr)*random()));
    }

    int roll() {
        return rand()%6+1;
    }
};

struct dice_constants {
    std::string const data[6] = {"Energy", "Attack", "Destruction", "Heal", "Celebrity", "Ouch!"};
};

class dicefacility {
    std::vector<int> die;
    int max;
    int curr;
    std::string hlogg;
    dice* d;
    dice_constants* constants;

    void logging();

public:
    dicefacility();

    void rollAll();

    void roll(std::string& s);

    void print();

    void history();
};