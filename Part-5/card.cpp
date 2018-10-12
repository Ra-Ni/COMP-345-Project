
#include "card.h"

const std::string &card::name() {
    return _name;
}

const std::string &card::description() {
    return _description;
}

const int card::cost() {
    return _cost;
}

const std::string card::to_string() {
    return "Name: " + _name + "\n\tDescription: " + _description + "\n\tCost: " + std::to_string(_cost) + '\n';
}
