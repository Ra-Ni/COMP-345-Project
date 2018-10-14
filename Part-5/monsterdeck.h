
#ifndef COMP_345_PROJECT_MONSTERDECK_H
#define COMP_345_PROJECT_MONSTERDECK_H


#include "monster.h"
#include <vector>
/**
 * Includes a namespace for constants
 */
namespace monsters {
    const int MONSTERS_SIZE = 6;
    const std::string NAME[MONSTERS_SIZE] = {"Kong", "Mantis", "Sheriff", "Drakonis", "Rob", "Captain Fish"};
}
/**
 * Monsterdeck class comprised of an array of monsters (through a vector)
 */
class monsterdeck {
    std::vector<monster> monsters;
    bool isUsed[monsters::MONSTERS_SIZE];

public:
/**
* Default constructor
*/
    monsterdeck();

/**
 * Deconstructor
 */
    ~monsterdeck();

/**
 * Gets a pointer to a monster object given that the string id matches and that monster is available
 * @param id string id of the monster
 * @return monster object pointer
 */
    monster *getMonster(std::string id);

/**
 * Returns a string representation of the monsterdeck's total array of monsters
 * @return string of monsters
 */
    const std::string to_string();
};


#endif
