/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the main files for part5 to implement the card
 */
#include "card.h"

/**
 * Accessor method to be used to get the card name
 * @return The reference to the card name
 */
const std::string &card::name() {
    return _name;
}

/**
     * Accessor method to be used to get the card description
     * @return The reference to the card description
     */
const std::string &card::description() {
    return _description;
}

/**
* Accessor method to be used to get the card cost
* @return The reference to the card cost
*/
const int card::cost() {
    return _cost;
}

/**
     * ToString method for card objects
     * @return Information of card as a statement of type String
     */
const std::string card::to_string() {
    return "Name: " + _name + "\n\tDescription: " + _description + "\n\tCost: " + std::to_string(_cost) + '\n';
}
