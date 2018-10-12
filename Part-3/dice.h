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

class dicefacility {
    std::vector<int> die;
    int max;
    int curr;
    std::string hlogg;
    dice d{};

    void logging();

public:
    dicefacility();

    void rollAll();

    void roll(std::string& s);

    void print();

    void history();
};