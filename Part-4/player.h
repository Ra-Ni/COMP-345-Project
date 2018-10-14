/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */

/**
 * This is the header file for part 4 which implements the player
 */
#ifndef COMP_345_PROJECT_PLAYER_H
#define COMP_345_PROJECT_PLAYER_H

#include "../Part-5/card.h"
#include "../Part-5/token.h"
#include "../Part-5/monster.h"
#include "../Part-3/dicefacility.h"

#include <vector>

/**
 * Player class which comprises of an object that owns cards, tokens, monsters, and dice
 */
class player {
    std::vector<card> c;
    std::vector<token> t;
    monster *m;
    dicefacility d;
public:
/**
* Player default constructor
*/
    player();

/**
 * Player deconstructor
 */
    ~player();

public:
/**
 * Requests for monster by name
 */
    bool requestMonster(std::string name);

/**
 * Draws a card. In future release will implement the "cost" of cards to purchase them
 */
    void draw();

/**
 * Requests for token by name
 * @param token the name of the token to request for
 * @return true if request approved, false otherwise
 */
    bool requestToken(std::string token);

/**
 * Rolls the dice up to three times maximum, must end turn for them to reset
 */
    void roll();

/**
 * Ends the players turn
 */
    void endTurn();

/**
 * Returns a string representation of the player's stats
 * @return a string
 */
    const std::string to_string();

};


#endif
