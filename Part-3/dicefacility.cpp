#include "dice.h"
#include <iostream>
#include <string>
#include <functional>

std::string const data[6] = {"Energy", "Attack", "Destruction", "Heal", "Celebrity", "Ouch!"};

dicefacility::dicefacility() {
    for(int i = 0 ; i < 6; i++) {
        die.emplace_back(d.roll());
    }
    max = 3;
    curr = 1;
    logging();
}

void dicefacility::rollAll() {
    if(curr >= max) {
        std::cout << "Cannot roll anymore" << std::endl;
        return;
    }
    for (int &i : die) {
        i = d.roll();
    }
    curr++;
    logging();
}

void dicefacility::roll(std::string& s) {
    std::vector<bool> visited(sizeof(die)/sizeof(int),false);
    if(curr >= max) {
        std::cout << "Cannot roll anymore" << std::endl;
    }
    for(char in : s) {
        if(in < '0' || in > '6' || visited[in-48]) {
            continue;
        }
        die[in-48] = d.roll();
        visited[in-48] = true;
    }
    curr++;
    logging();
}

void dicefacility::print() {
    int i = 0;
    std::cout<<std::endl;
    for(int in : die) {
        std::cout << data[in-1] << '(' << i++ << ')' << std::endl;
    }
}

void dicefacility::logging() {
    hlogg+=("Roll #")+std::to_string(curr)+": ";
    for (int i : die) {
        hlogg+=std::to_string(i)+" ";
    }
    hlogg+='\n';
}

void dicefacility::history() {
    std::cout << hlogg << std::endl;
}
