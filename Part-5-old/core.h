#ifndef COMP_345_PROJECT_CORE_H
#define COMP_345_PROJECT_CORE_H
#include "collections.h"

/**
 * struct core
 * Provides the basis for data access of unique objects.
 * Design allows for future expansion, as well as for efficient resource organization and allocation.
 * @see core.cpp
 */
class core {
protected:
    char sizes[6] = {6, 9, 3, 4, 66}; // default values for every struct (monster,building,unit,token,cards)
    monster *monsters;
    tile *buildings;
    tile *units;
    token *tokens;
    card *cards;

    core();

    ~core();

    void load();

    void save();

    void reset();
};

#endif