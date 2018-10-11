#ifndef COMP_345_PROJECT_CPPPSA_H
#define COMP_345_PROJECT_CPPPSA_H
#endif

struct monster;
struct tile;
struct token;
struct card;

/**
 * struct core
 * Provides the basis for data access of unique objects.
 * Design allows for future expansion, as well as for efficient resource organization and allocation.
 * @see core.cpp
 */
struct core {
    char sizes[6] = {6, 9, 3, 4, 66}; // default values for every struct (monster,building,unit,token,cards)
    monster *monsters;
    tile *buildings;
    tile *units;
    token *tokens;
    card *cards;

    ~core();

    void load();

    void save();

    void reset();

    void print();
};
