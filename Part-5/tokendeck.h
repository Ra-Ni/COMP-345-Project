/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the header files for part5 to implement the tokendeck
 */


#ifndef COMP_345_PROJECT_TOKENDECK_H
#define COMP_345_PROJECT_TOKENDECK_H

#include "token.h"
#include <iostream>
#include <vector>


namespace tokens {
    const int TOKEN_SIZE = 46;
    const int DISTRIBUTION[4] = {13, 13, 5, 15};
    const std::string NAME[4] = {"Web", "Jynx", "Souvenir", "Carpace"};
}

class tokendeck {
    std::vector<token> tokens[4];
public:
    /**
     * Defaullt constructor fo tokendeck class
     */
    tokendeck();

    /**
     * Destructor for tokendeck object
     */
    ~tokendeck();
    // todo please check if I write the correct return type for these methods
    /**
     * Accessor method to get web tokens
     * @return Reference to web token
     */
    token &getWeb();

    /**
     *Accessor method to get jynx tokens
     * @return Reference to jynx token
     */
    token &getJynx();

    /**
     *Accessor method to get souvenir tokens
     * @return Reference to souvenir token
     */
    token &getSouvenir();

    /**
     *Accessor method to get carpace tokens
     * @return Reference to carpace token
     */
    token &getCarpace();

    /**
     * ToString method for tokendeck
     * @return Information of tokens as a statement of type String
     */
    const std::string to_string();
};


#endif
