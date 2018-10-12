#include "building.h"

const bool building::hit(int i) {
    _durability -= i;
    return _durability == 0;
}

const std::string &building::id() {
    return _id;
}

const std::string &building::type() {
    return _type;
}

const int building::durability() {
    return _durability;
}

const int building::reward() {
    return _reward;
}

std::string building::to_string() {
    return "Name: " + _id + "\n\tType: " + _type + "\n\tDurability: " + std::to_string(_durability) + '/' +
           std::to_string(_reward) + "\n\tReward: " + std::to_string(_reward) + '\n';
}

