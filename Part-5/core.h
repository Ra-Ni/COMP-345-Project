#ifndef COMP_345_PROJECT_CPPPSA_H
#define COMP_345_PROJECT_CPPPSA_H
#endif

struct monster;
struct tile;
struct token;
struct card;

struct core {
    char sizes[6] = {6, 9, 3, 4, 66};
    monster *monsters; //6
    tile *buildings; //9
    tile *units; //3
    token *tokens; //4
    card *cards; //66

    ~core();

    void load();

    void save();

    void reset();

    void print();
};
