#include "controller.h"

monster &controller::monsterAt(char id) {
    return monsters[id];
}

token &controller::tokenAt(char id) {
    return tokens[id];
}


card &controller::cardAt(char id) {
    return cards[id];
}

tile &controller::buildingAt(char id) {
    return buildings[id];
}

tile &controller::unitAt(char id) {
    return units[id];
}

