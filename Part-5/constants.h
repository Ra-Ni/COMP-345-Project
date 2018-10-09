#ifndef COMP_345_PROJECT_CONSTANTS_H
#define COMP_345_PROJECT_CONSTANTS_H
#endif

#include <iostream>
/**
 * Contents of the game board
 */
struct constants {
    const std::string genericType[3] = {"Health", "Energy", "Victory"};
    const std::string buildingID[3] = {"Hospital", "Power Plant", "High Rise"};
    const std::string unitID[3] = {"Infantry", "Jet", "Tank"};
    const std::string monsterID[6] = {"Sheriff", "Drakonis", "Captain Fish", "Mantis", "Rob", "Kong"};
    const std::string tokenID[4] = {"Web", "Jynx", "Souvenir", "Carpace"};
};