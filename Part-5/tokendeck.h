#ifndef COMP_345_PROJECT_TOKENDECK_H
#define COMP_345_PROJECT_TOKENDECK_H

#include <iostream>
#include <vector>
#include "token.h"

namespace tokens {
    const int TOKEN_SIZE = 46;
    const int DISTRIBUTION[4] = {13,13,5,15};
    const std::string NAME[4] = {"Web","Jynx","Souvenir","Carpace"};
}
class tokendeck {
    std::vector<token> tokens[4];
public:
    tokendeck();
    ~tokendeck();
    token& getWeb();
    token& getJynx();
    token& getSouvenir();
    token& getCarpace();
    const std::string to_string();
};


#endif //UNTITLED3_TOKENDECK_H
