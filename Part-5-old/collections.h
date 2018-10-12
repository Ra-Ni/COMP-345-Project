#ifndef COMP_345_PROJECT_COLLECTIONS_H
#define COMP_345_PROJECT_COLLECTIONS_H


struct monster {
    char _id;
    char _health;
    char _victory_points;
    bool _taken;
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
    char _cost;
    bool _taken;
};
#endif
