#include "carddeck.h"
#include <algorithm>
#include <random>

carddeck::carddeck() {
    card* c;
    for(int i = 0 ; i < cards::DECK_SIZE; i++) {
        c = new card(cards::NAME[i],cards::DESCRIPTION[i],cards::COST[i]);
        cards.push_back(*c);
    }
}

carddeck::~carddeck() = default;

void carddeck::shuffle() {
    std::shuffle(cards.begin(),cards.end(), std::mt19937(std::random_device()()));
}

card& carddeck::get() {
    card& c = cards.back();
    cards.pop_back();
    return c;
}

const std::string carddeck::to_string() {
    std::string s;
    for(card& in : cards) {
        s+=in.to_string();
    }
    return s;
}



