#ifndef COMP_345_PROJECT_CONTROLLER_H
#define COMP_345_PROJECT_CONTROLLER_H
#include "collections.h"
#include "core.h"

class controller : protected core {
protected:
    controller() = default;
    ~controller() = default;
    monster& monsterAt(char id);
    tile& buildingAt(char id);
    tile& unitAt(char id);
    token& tokenAt(char id);
    card& cardAt(char id);
};

#endif