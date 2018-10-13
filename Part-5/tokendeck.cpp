/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the main files for part5 to implement the tokendeck
 */
#include "tokendeck.h"

/**
 * Default Constructior method that creates tokens list
 */
tokendeck::tokendeck() {
    token *t;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < tokens::DISTRIBUTION[j]; i++) {
            t = new token(tokens::NAME[j]);
            tokens[j].push_back(*t);
        }
    }
}

/**
 * Destructor for tokendeck object
 */
tokendeck::~tokendeck() = default;

/**
 * Accessor method to get web token, web token is the index 0 of token array
 * @return Reference to web token
 */
token &tokendeck::getWeb() {
    token &t = tokens[0].back();
    tokens[0].pop_back();
    return t;
}

/**
     *Accessor method to get jynx token, jynx token is the 1st index of token array
     * @return Reference to jynx token
     */
token &tokendeck::getJynx() {
    token &t = tokens[1].back();
    tokens[1].pop_back();
    return t;
}

/**
    *Accessor method to get souvenir token, souvenir token is the 2nd index of token array
    * @return Reference to souvenir token
    */
token &tokendeck::getSouvenir() {
    token &t = tokens[2].back();
    tokens[2].pop_back();
    return t;
}

/**
*Accessor method to get carpace token, carpace token is the 3rd index of token array
* @return Reference to carpace token
*/
token &tokendeck::getCarpace() {
    token &t = tokens[3].back();
    tokens[3].pop_back();
    return t;
}

/**
     * ToString method for token objects
     * @return Information (type and quantity) of tokendeck as a statement of type String
     */
const std::string tokendeck::to_string() {
    std::string s;
    for (int i = 0; i < 4; i++) {
        s += "Name: " + tokens::NAME[i] + "\n\tQuantity: " + std::to_string(tokens[i].size()) + "/" +
             std::to_string(tokens::DISTRIBUTION[i]) + '\n';
    }
    return s;
}
