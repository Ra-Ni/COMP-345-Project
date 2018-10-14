/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the header files for part5 to implement the buildings
 */
#ifndef COMP_345_PROJECT_BUILDING_H
#define COMP_345_PROJECT_BUILDING_H

#include <iostream>

class building {
    std::string _id;
    std::string _type;
    int _durability;
    int _reward;
public:
    /**
     * Parametrized constructor for building class
     * @param id The building's id
     * @param type The building's type
     * @param durability The building's durability
     */
    building(std::string id, std::string type, int durability) : _id(id), _type(type), _durability(durability),
                                                                 _reward(durability) {
    }

/**
 * A method that implements hits on building means reducing one durability
 * @param i The number of hits occurs to the monster
 * @return
 */
    const bool hit(int i = 1);

/**
 * Accessor method that returns the building's id
 * @return The building's id
 */
    const std::string &id();

/**
 * Accessor method that returns a reference to the building's type
 * @return A reference to the building's type
 */
    const std::string &type();

/**
 * Accessor method that returns the building's durability (a number)
 * @return The building's durability (a number)
 */
    const int durability();

/**
 * Accessor method that returns the building's rewards (a number)
 * @return The building's rewards (a number)
 */
    const int reward();

/**
 * returns string representation of the building stats
 * @return string
 */
    std::string to_string();
};


#endif
