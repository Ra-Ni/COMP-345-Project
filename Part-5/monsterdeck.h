
#ifndef COMP_345_PROJECT_MONSTERDECK_H
#define COMP_345_PROJECT_MONSTERDECK_H


#include "monster.h"
#include <vector>

namespace monsters {
    const int MONSTERS_SIZE = 6;
    const std::string NAME[MONSTERS_SIZE] = {"Kong", "Mantis", "Sheriff", "Drakonis", "Rob", "Captain Fish"};
}

class monsterdeck {
    std::vector<monster> monsters;
    bool isUsed[monsters::MONSTERS_SIZE];

public:
    monsterdeck();

    ~monsterdeck();

    monster *getMonster(std::string id);

    const std::string to_string();
};


#endif
