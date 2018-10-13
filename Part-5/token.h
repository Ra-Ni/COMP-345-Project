/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the header files for part5 to implement the token
 */
#ifndef COMP_345_PROJECT_TOKEN_H
#define COMP_345_PROJECT_TOKEN_H

#include <iostream>

class token {
    std::string _id;

public:
/**
 * Parametrized constructor for token objects
 * @param id string id of token
 */
    explicit token(std::string id) : _id(move(id)) {
    }

    const std::string id();

    /**
        * ToString method for token objects
        * @return Information of token as a statement of type String
        */
    const std::string to_string();
};


#endif