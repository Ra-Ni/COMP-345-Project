/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the main files for part5 to implement the buildings
 */
#include "building.h"

/** A method that implements hits on building means reducing one durability
* @param i The number of hits occurs to the monster
* @return
*/
const bool building::hit(int i) {
    _durability -= i;
    return _durability == 0;
}

/**
 * Accessor method that returns the building's id
 * @return The building's id
 */
const std::string &building::id() {
    return _id;
}

/**
 * Accessor method that returns a reference to the building's type
 * @return A reference to the building's type
 */
const std::string &building::type() {
    return _type;
}

/**
 * Accessor method that returns the building's durability (a number)
 * @return The building's durability (a number)
 */
const int building::durability() {
    return _durability;
}

/**
 * Accessor method that returns the building's rewards (a number)
 * @return The building's rewards (a number)
 */
const int building::reward() {
    return _reward;
}

/**
 * ToString method for building objects
 * @return Information of building as a statement of type String
 */
std::string building::to_string() {
    return "Name: " + _id + "\n\tType: " + _type + "\n\tDurability: " + std::to_string(_durability) + '/' +
           std::to_string(_reward) + "\n\tReward: " + std::to_string(_reward) + '\n';
}

