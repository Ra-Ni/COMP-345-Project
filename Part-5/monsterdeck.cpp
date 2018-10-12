#include "monsterdeck.h"
#include <cassert>

monsterdeck::monsterdeck() {
    monster *t;
    for (int i = 0; i < monsters::MONSTERS_SIZE; i++) {
        t = new monster(monsters::NAME[i]);
        monsters.push_back(*t);
        isUsed[i] = false;
    }
}

monsterdeck::~monsterdeck() = default;

monster *monsterdeck::getMonster(std::string id) {
    int index = 0;
    for (auto &i : monsters) {
        if (id == i.id()) {
            assert(!isUsed[index]);
            isUsed[index] = true;
            return &i;
        }
        index++;
    }
    return nullptr;
}

const std::string monsterdeck::to_string() {
    std::string s;
    for (auto &i : monsters) {
        s += i.to_string();
    }
    return s;
}
