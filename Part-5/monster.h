/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the header files for part5 to implement the monsters
 */
#ifndef COMP_345_PROJECT_MONSTER_H
#define COMP_345_PROJECT_MONSTER_H

#include <iostream>

class monster {
    std::string _id;
    char _hp;
    char _vp;
public:
    /**
     * Parametrized constructor for creation of a monster
     * @param id The monster id
     */
    monster(std::string id) : _id(id), _hp(10), _vp(0) {
    }
//todo Plase check this method documentation:
/**
 * A method that implements Ouch on monster means reducing one H
 * @param i The number of Ouch occurs to the monster
 */
    void ouch(int i = 1);

/**
 * A method that implements Heal on monster means increasing one H
 * @param i The number of Ouch occurs to the monster
 */
    void heal(int i = 1);

/**
 * Accessor method that returns a monsters's id
 * @return The monster id
 */
    const std::string &id();

/**
 * Accessor method that returns the number of H for a monster
 * @return The number of H of a monster
 */
    const int health();

/**
 * Accessor method that returns the number of victory points for a monster
 * @return The number of victory points for a monster
 */
    const int victory_points();

/**
 * ToString method for monster objects
 * @return Information of monster as a statement of type String
 */
    const std::string to_string();
};


#endif
