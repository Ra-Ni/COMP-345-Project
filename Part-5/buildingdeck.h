/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the header files for part5 to implement the buildingdeck
 */
#ifndef COMP_345_PROJECT_BUILDINGDECK_H
#define COMP_345_PROJECT_BUILDINGDECK_H


#include "building.h"
#include <iostream>
#include <vector>


class buildingdeck {
    std::vector<building> buildings; // Creation of buildings vector
public:
    /**
     * Default constructor for buildingdeck class
     */
    buildingdeck();

/**
 * Destructor for objects of buildingdeck class
 */
    ~buildingdeck();

/**
 * This method shuffles the buildings
 */
    void shuffle();

/**
 * ToString method for buildingdeck objects
 * @return Information of buildingdeck as a statement of type String
 */
    const std::string to_string();
};

// In this part the building constants are defined
namespace buildings {
    const int BUILDINGS_SIZE = 45;
    const int BUILDING_UNIQUE = 9;
    const std::string BUILDING_TYPE[3] = {
            "HEALTH",
            "ENERGY",
            "VICTORY"
    };
    const std::string BUILDING_NAME[3] = {
            "HOSPITAL",
            "POWER PLANT",
            "HIGH RISE"
    };
}

#endif
