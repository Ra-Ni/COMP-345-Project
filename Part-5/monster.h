#ifndef COMP_345_PROJECT_MONSTER_H
#define COMP_345_PROJECT_MONSTER_H
#endif
#include <iostream>

class monster {
    std::string *_name;
    unsigned char *_health;
    unsigned char *_victory_points;
public:
    monster() :
            _name(nullptr),
            _health(nullptr),
            _victory_points(nullptr) {
    }

    monster(
            std::string &name,
            unsigned char &health,
            unsigned char &victory_points) :
            _name(&name),
            _health(&health),
            _victory_points(&victory_points) {
    }

    ~monster() {
        _name = nullptr;
        _health = nullptr;
        _victory_points = nullptr;
    }

    unsigned char read_hp() {
        return *_health;
    }

    unsigned char read_vp() {
        return *_victory_points;
    }

    void update_hp(int &delta) {
        _health = _health + delta;
    }

    void update_vp(int &delta) {
        _victory_points = _victory_points + delta;
    }

    friend std::ostream &operator<<(std::ostream &out, const monster &m);
};

std::ostream &operator<<(std::ostream &out, const monster &m) {
    out << *m._name << "\n\tHealth: " << (int)(*m._health) << "\n\tVictory Points: "
        << (int)(*m._victory_points);
    return out;
}