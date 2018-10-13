/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the main files for part5 to implement the monsters
 */
#include "monster.h"

/**
 * A method that implements Ouch on monster means reducing one H
 * @param i The number of Ouch occurs to the monster
 */
void monster::ouch(int i) {
    _hp -= i;
}

/**
 * A method that implements Heal on monster means increasing one H
 * @param i The number of Ouch occurs to the monster
 */
void monster::heal(int i) {
    _hp += i;
}

/**
 * Accessor method that returns a monsters's id
 * @return The monster id
 */
const std::string &monster::id() {
    return _id;
}

/**
 * Accessor method that returns the number of H for a monster
 * @return The number of H of a monster
 */
const int monster::health() {
    return _hp;
}

/**
 * Accessor method that returns the number of victory points for a monster
 * @return The number of victory points for a monster
 */
const int monster::victory_points() {
    return _vp;
}

/**
 * ToString method for monster objects
 * @return Information of monster as a statement of type String
 */
const std::string monster::to_string() {
    return "Name: " + _id + "\n\tHealth: " + std::to_string(_hp) + "\n\tVictory: " + std::to_string(_vp) + '\n';
}

