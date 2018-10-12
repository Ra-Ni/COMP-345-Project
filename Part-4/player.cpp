
#include "player.h"


namespace pshared {
    carddeck cards;
    tokendeck tokens;
    monsterdeck monsters;
}


player::player() = default;

player::~player() = default;

bool player::requestMonster(std::string name) {
    m = pshared::monsters.getMonster(name);
    return m != nullptr;
}

void player::draw() {
    c.push_back(pshared::cards.get());
}

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
