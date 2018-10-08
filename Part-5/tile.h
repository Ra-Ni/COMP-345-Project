#ifndef COMP_345_PROJECT_TILE_H
#define COMP_345_PROJECT_TILE_H
#endif
#include <string>
#include <iostream>

class tile {
    bool _unit;
    std::string *_type;
    std::string *_id;
    unsigned char *_reward;
    unsigned char *_durability;
public:
    tile() :
            _unit(false),
            _type(nullptr),
            _id(nullptr),
            _reward(nullptr),
            _durability(nullptr) {
    }

    tile(
            std::string &type,
            std::string &id,
            unsigned char &reward,
            unsigned char &durability,
            bool isUnit) :
            _type(&type),
            _id(&id),
            _reward(&reward),
            _durability(&durability),
            _unit(isUnit) {
    }

    ~tile() {
        _id = nullptr;
        _type = nullptr;
        _reward = nullptr;
        _durability = nullptr;
    }

    friend std::ostream &operator<<(std::ostream &out, const tile &t);
};

std::ostream &operator<<(std::ostream &out, const tile &t) {
    out << *t._id << "\n\tDurability: " << (int) *t._durability << "\n\tReward: " << "+" << (int) *t._reward << ' '
        << *t._type;
    return out;
}
