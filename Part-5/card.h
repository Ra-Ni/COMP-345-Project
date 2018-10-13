/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the header files for part5 to implement the card
 */
#ifndef COMP_345_PROJECT_CARD_H
#define COMP_345_PROJECT_CARD_H

#include <iostream>

class card {
    std::string _name;
    std::string _description;
    int _cost;

public:
    /**
     * Parametrized constructor for card class
     * @param name Card name
     * @param description Card descriptions
     * @param cost Card cost (number of E needed to buy a card)
     */
    card(std::string name, std::string description, int cost) :
            _name(std::move(name)), _description(std::move(description)), _cost(cost) {
    }

    /**
     * Accessor method to be used to get the card name
     * @return The reference to the card name
     */
    const std::string &name();

    /**
     * Accessor method to be used to get the card description
     * @return The reference to the card description
     */
    const std::string &description();

    /**
     * Accessor method to be used to get the card cost
     * @return The reference to the card cost
     */
    const int cost();

    /**
     * ToString method for card objects
     * @return Information of card as a statement of type String
     */
    const std::string to_string();

};


#endif //UNTITLED3_CARD_H
