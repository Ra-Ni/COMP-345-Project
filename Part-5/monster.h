#ifndef COMP_345_PROJECT_MONSTER_H
#define COMP_345_PROJECT_MONSTER_H

#include <iostream>

class monster {
    std::string _id;
    char _hp;
    char _vp;
public:
    monster(std::string id) : _id(id),_hp(10),_vp(0) {
    }
    void ouch(int i = 1);
    void heal(int i = 1);
    const std::string& id();
    const int health();
    const int victory_points();
    const std::string to_string();
};


#endif //UNTITLED3_MONSTER_H
