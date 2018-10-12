
#ifndef COMP_345_PROJECT_CARD_H
#define COMP_345_PROJECT_CARD_H

#include <iostream>

class card {
    std::string _name;
    std::string _description;
    int _cost;

public:
    card(std::string name, std::string description,int cost) :
    _name(std::move(name)),_description(std::move(description)),_cost(cost) {
    }
    const std::string& name();
    const std::string& description();
    const int cost();
    const std::string to_string();

};


#endif //UNTITLED3_CARD_H
