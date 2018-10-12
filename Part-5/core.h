//This is the header file for part 5/core which makes a core from different game elements
/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
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
/**
 * Loading the core
 */
    void load();
/**
 * Saving the current core
 */
    void save();
/**
 * Resets the core to default
 */
    void reset();
/**
 * Prints the information of the core
 */
    void print();
};
