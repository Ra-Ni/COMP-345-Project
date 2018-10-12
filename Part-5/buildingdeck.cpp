#include "buildingdeck.h"
#include <algorithm>
#include <random>

buildingdeck::buildingdeck() {
    building* c;
    for(int j = 0 ; j < 5; j++) {
        for (int i = 0; i < buildings::BUILDING_UNIQUE; i++) {
            c = new building(buildings::BUILDING_NAME[i % 3], buildings::BUILDING_TYPE[i % 3], i / 3 + 1);
            buildings.push_back(*c);
        }
    }
}

buildingdeck::~buildingdeck() = default;

void buildingdeck::shuffle() {
    std::shuffle(buildings.begin(),buildings.end(), std::mt19937(std::random_device()()));
}

const std::string buildingdeck::to_string() {
    std::string s;
    for(building& in : buildings) {
        s+=in.to_string();
    }
    return s;
}
