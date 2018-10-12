//This is the header file for part 5 / collections which implements the needed structures
/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */


#ifndef COMP_345_PROJECT_STRUCTURES_H
#define COMP_345_PROJECT_STRUCTURES_H
#endif

/**
 * making a structure for monsters
 */
struct monster {
    char _id;
    char _health;
    char _victory_points;
    bool _taken;
};

/**
 * making a structure for tiles
 */
struct tile {
    char _id;
    char _type;
    char _reward;
    char _durability;
    char _count;
};

/**
 * making a structure for tokens
 */
struct token {
    char _id;
    char _count;
};

/**
 * making a structure for cards
 */
struct card {
    char _id;
    char _description;
    char _effect;
    char _cost;
};
