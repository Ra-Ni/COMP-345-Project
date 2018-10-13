/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is one of the main files for part5 to implement the buildingdeck
 */
#include "buildingdeck.h"
#include <algorithm>
#include <random>

/**
 * Default constructor for buildingdeck class
 */
buildingdeck::buildingdeck() {
    building *c;
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < buildings::BUILDING_UNIQUE; i++) {
            c = new building(buildings::BUILDING_NAME[i % 3], buildings::BUILDING_TYPE[i % 3], i / 3 + 1);
            buildings.push_back(*c);
        }
    }
}

/**
 * Destructor for objects of buildingdeck class
 */
buildingdeck::~buildingdeck() = default;

/**
 * This method shuffles the buildings
 */
void buildingdeck::shuffle() {
    std::shuffle(buildings.begin(), buildings.end(), std::mt19937(std::random_device()()));
}

/**
 * ToString method for buildingdeck objects
 * @return Information of buildingdeck as a statement of type String
 */
const std::string buildingdeck::to_string() {
    std::string s;
    for (building &in : buildings) {
        s += in.to_string();
    }
    return s;
}
