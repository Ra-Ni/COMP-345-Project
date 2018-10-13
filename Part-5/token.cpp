/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the main files for part5 to implement the token
 */
#include "token.h"

/**
 * Accessor method that returns token id
 * @return Token id
 */
const std::string token::id() {
    return _id;
}

/**
 * ToString method for token objects
 * @return Information of token as a statement of type String
 */
const std::string token::to_string() {
    return "Name: " + _id + '\n';
}

