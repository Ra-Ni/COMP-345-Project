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

class player {
    std::vector<card> c;
    std::vector<token> t;
    monster *m;
    dicefacility d;
public:
    player();

    ~player();

public:
    bool requestMonster(std::string name);

    void draw();

    bool requestToken(std::string token);

    void roll();

    void endTurn();

    const std::string to_string();


};


#endif
