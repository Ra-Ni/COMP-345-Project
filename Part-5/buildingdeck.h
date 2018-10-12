#ifndef COMP_345_PROJECT_BUILDINGDECK_H
#define COMP_345_PROJECT_BUILDINGDECK_H


#include "building.h"
#include <iostream>
#include <vector>


class buildingdeck {
    std::vector<building> buildings;
public:
    buildingdeck();

    ~buildingdeck();

    void shuffle();

    const std::string to_string();
};


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
