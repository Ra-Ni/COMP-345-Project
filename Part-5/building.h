#ifndef COMP_345_PROJECT_BUILDING_H
#define COMP_345_PROJECT_BUILDING_H

#include <iostream>

class building {
    std::string _id;
    std::string _type;
    int _durability;
    int _reward;
public:
    building(std::string id, std::string type, int durability) : _id(id), _type(type), _durability(durability),
                                                                 _reward(durability) {
    }

    const bool hit(int i = 1);

    const std::string &id();

    const std::string &type();

    const int durability();

    const int reward();


    std::string to_string();
};


#endif
