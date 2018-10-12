#ifndef COMP_345_PROJECT_PLAYER_H
#define COMP_345_PROJECT_PLAYER_H

#include "../Part-5/carddeck.h"
#include "../Part-5/tokendeck.h"
#include "../Part-5/monsterdeck.h"

class player {


    std::vector<card> c;
    std::vector<token> t;
    monster *m;
public:
    player();

    ~player();

public:
    bool requestMonster(std::string name);

    void draw();

    bool requestToken(std::string token);


};


#endif
