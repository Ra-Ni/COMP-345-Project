
#include "monster.h"

void monster::ouch(int i) {
    _hp -= i;
}

void monster::heal(int i) {
    _hp += i;
}


const std::string &monster::id() {
    return _id;
}

const int monster::health() {
    return _hp;
}

const int monster::victory_points() {
    return _vp;
}

const std::string monster::to_string() {
    return "Name: " + _id + "\n\tHealth: " + std::to_string(_hp) + "\n\tVictory: " + std::to_string(_vp) + '\n';
}

