#ifndef COMP_345_PROJECT_STRUCTURES_H
#define COMP_345_PROJECT_STRUCTURES_H
#endif


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
    char _cost;
    char _effect;
};
