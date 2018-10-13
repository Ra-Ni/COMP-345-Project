/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the main files for part5 to implement the carddeck
 */
#include "carddeck.h"
#include <algorithm>
#include <random>

/**
 * Default constructor for carddeck class that creates all the 66 cards
 */
carddeck::carddeck() {
    card *c;
    for (int i = 0; i < cards::DECK_SIZE; i++) {
        c = new card(cards::NAME[i], cards::DESCRIPTION[i], cards::COST[i]);
        cards.push_back(*c);
    }
}

/**
 * Destructor for curddeck class
 */
carddeck::~carddeck() = default;
//todo please add to this documentation a little more information:
/**
 * This method shuffles the cards <<ADD HERE PLEASE>>
 */
void carddeck::shuffle() {
    std::shuffle(cards.begin(), cards.end(), std::mt19937(std::random_device()()));
}

/**
 * Accessor method that returns a card reference in the carddeck
 * @return  A card reference  in the carddeck
 */
card &carddeck::get() {
    card &c = cards.back();
    cards.pop_back();
    return c;
}

/**
 * ToString method for carddeck
 * @return Information of carddeck as a statement of type String
 */
const std::string carddeck::to_string() {
    std::string s;
    for (card &in : cards) {
        s += in.to_string();
    }
    return s;
}



