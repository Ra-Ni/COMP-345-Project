#ifndef COMP_345_PROJECT_ARCHIVE_H
#define COMP_345_PROJECT_ARCHIVE_H
#include <iostream>
#endif

    struct monster {
        char _id;
        char _health;
        char _victory_points;
    };

    struct tile {
        char _id;
        char _type;
        char _reward;
        char _durability;
        char _count;
    };

    struct token {
        char _id;
        char _count;
    };

    struct card {
        char _id;
        char _description;
        char _effect;
    };

struct core {
    monster _monsters[6];
    tile _buildings[9];
    tile _units[3];
    token _tokens[4];
    card _cards[66]; //how many distinct cards?
public:
    void load();
    void save();
    void reset();
};

