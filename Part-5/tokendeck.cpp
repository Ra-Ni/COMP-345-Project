#include "tokendeck.h"

tokendeck::tokendeck() {
    token* t;
    for (int j = 0 ; j < 4; j++) {
        for (int i = 0; i < tokens::DISTRIBUTION[j]; i++) {
            t = new token(tokens::NAME[j]);
            tokens[j].push_back(*t);
        }
    }
}

tokendeck::~tokendeck() = default;

token& tokendeck::getWeb() {
    token& t = tokens[0].back();
    tokens[0].pop_back();
    return t;
}

token& tokendeck::getJynx() {
    token& t = tokens[1].back();
    tokens[1].pop_back();
    return t;
}

token& tokendeck::getSouvenir() {
    token& t = tokens[2].back();
    tokens[2].pop_back();
    return t;
}

token& tokendeck::getCarpace() {
    token& t = tokens[3].back();
    tokens[3].pop_back();
    return t;
}

const std::string tokendeck::to_string() {
    std::string s;
    for(int i = 0 ; i < 4; i ++) {
        s+="Name: " + tokens::NAME[i] + "\n\tQuantity: " + std::to_string(tokens[i].size())+"/"+ std::to_string(tokens::DISTRIBUTION[i])+'\n';
    }
    return s;
}
