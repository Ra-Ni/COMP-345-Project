/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */

/**
 * This is the main file for part 4 which implements the player
 */
#include "player.h"

#include "../Part-5/carddeck.h"
#include "../Part-5/tokendeck.h"
#include "../Part-5/monsterdeck.h"

namespace pshared {
    carddeck cards;
    tokendeck tokens;
    monsterdeck monsters;
}

/**
 * Default constructor for player class
 */
player::player() = default;

/**
 * Destructor for player objects
 */
player::~player() = default;

/**
 * This method takes a name for monster as parameter and returns true if the monster name has  ...
 * @param name
 * @return
 */
bool player::requestMonster(std::string name) {
    m = pshared::monsters.getMonster(name);
    return m != nullptr;
}

/**
 * Draw a card
 */
void player::draw() {
    c.push_back(pshared::cards.get());
}

/**
 * Requests a particular token by name
 * @param token name of token
 * @return true if request accepted, else false
 */
bool player::requestToken(std::string token) {
    if (token == tokens::NAME[0]) {
        t.push_back(pshared::tokens.getWeb());
    } else if (token == tokens::NAME[1]) {
        t.push_back(pshared::tokens.getJynx());
    } else if (token == tokens::NAME[2]) {
        t.push_back(pshared::tokens.getSouvenir());
    } else if (token == tokens::NAME[3]) {
        t.push_back(pshared::tokens.getCarpace());
    } else {
        return false;
    }
    return true;
}

/**
 * Prompts to roll a dice (Maximum 3 times) until end of turn
 */
void player::roll() {
    std::string s;
    while(true) {
        std::cout << d.to_string();
        std::cout << "roll all(-1), roll selected(enter string #s), or stay/exit(-2)? : ";
        std::cin >> s;
        if (s == "-2") {
            return;
        }
        if (s == "-1") {
            d.rollAll();
        } else {
            d.roll(s);
        }
    }
}

/**
 * Ends the turn of a player, resetting the dicefacility object
 */
void player::endTurn() {
    d.reset();
}

/**
 * Saves player stats as string, and returns
 * @return returns a string representation of player stats
 */
const std::string player::to_string() {
    std::string s = "Player:\n" + (m->to_string());
    for (auto &in : c) {
        s += in.to_string();
    }
    for (auto &in : t) {
        s += in.to_string();
    }
    return s;
}


