#include "core.h"
#include "constants.h"
#include <fstream>

using namespace std;

core::core() {
    ifstream in("./Resources/core.so");
    if(in.good()) {
        load();
    }
    else {
        reset();
        save();
    }
    in.close();
}


/**
 * core Destructor
 */
core::~core() {
    save();
    delete[] monsters;
    delete[] buildings;
    delete[] units;
    delete[] tokens;
    delete[] cards;
    monsters = nullptr;
    buildings = nullptr;
    units = nullptr;
    tokens = nullptr;
    cards = nullptr;
}

/**
 * core::load()
 * Loads the core.so file located in Resources directory by reading the stream and outputting it to memory.
 * Each object occupies a contiguous memory region, and each have their own counters for resource allocations.
 * core.cpp points to these regions in memory, and becomes at a state where it is ready to allocate resources to players.
 */
void core::load() {
    ifstream ifs("./Resources/core.so", ios::binary);
    ifs.read((char *) &sizes, sizeof(sizes));
    /*
     * Size of arrays can vary, since core::save() eliminates null pointers on objects not being used throughout the game.
     * This saves memory usage, and reduces fragmentation at the cost of time.
     */
    monsters = new monster[sizes[0]];
    buildings = new tile[sizes[1]];
    units = new tile[sizes[2]];
    tokens = new token[sizes[3]];
    cards = new card[sizes[4]];

    for (int i = 0; i < sizes[0]; i++) {
        ifs.read((char *) &monsters[i], sizeof(monsters));
    }
    for (int i = 0; i < sizes[1]; i++) {
        ifs.read((char *) &buildings[i], sizeof(buildings));
    }
    for (int i = 0; i < sizes[2]; i++) {
        ifs.read((char *) &units[i], sizeof(units));
    }
    for (int i = 0; i < sizes[3]; i++) {
        ifs.read((char *) &tokens[i], sizeof(tokens));
    }
    for (int i = 0; i < sizes[4]; i++) {
        ifs.read((char *) &cards[i], sizeof(cards));
    }
    ifs.close();
}

/**
 * core::save()
 * Opens the core.so file previously saved and overwrites it with current state of struct objects located in collections.h
 * Avoids writing null pointers to reduce fragmentation, and increase compactness during future loads.
 */
void core::save() {
    ofstream ofs("./Resources/core.so", ios::binary);
    ofs.write((char *) &sizes, sizeof(sizes));

    for (int i = 0; i < sizes[0]; i++) {
        ofs.write((char *) &monsters[i], sizeof(monsters));
    }
    for (int i = 0; i < sizes[1]; i++) {
        ofs.write((char *) &buildings[i], sizeof(buildings));
    }
    for (int i = 0; i < sizes[2]; i++) {
        ofs.write((char *) &units[i], sizeof(units));
    }
    for (int i = 0; i < sizes[3]; i++) {
            ofs.write((char *) &tokens[i], sizeof(tokens));
    }
    for (int i = 0; i < sizes[4]; i++) {
            ofs.write((char *) &cards[i], sizeof(cards));
    }
    ofs.close();
}

/**
 * core::reset()
 * Resets the entire collections objects back to defaults KONY standards.
 */
void core::reset() {
/*
 * Respective sizes of monster, buildings, units, tokens, and cards structures.
 */
    sizes[0] = 6;
    sizes[1] = 9;
    sizes[2] = 3;
    sizes[3] = 4;
    sizes[4] = 66;

    monsters = new monster[sizes[0]];
    buildings = new tile[sizes[1]];
    units = new tile[sizes[2]];
    tokens = new token[sizes[3]];
    cards = new card[sizes[4]];
    /*
    * Default values for monsters
    */
    for (char i = 0; i < sizes[0]; i++) {
        monsters[i]._id = i;
        monsters[i]._victory_points = 0;
        monsters[i]._health = 10;
        monsters[i]._taken = false;
    }
    /*
     * Default values for buildings
     */
    for (char i = 0; i < sizes[1]; i++) {
        buildings[i]._id = (char) (i % 3);
        buildings[i]._type = (char) (i % 3);
        buildings[i]._reward = (char) ((i / 3) + 1);
        buildings[i]._durability = (char) ((i / 3) + 1);
        buildings[i]._count = 5;
    }
    /*
    * Default values for units
    */
    for (char i = 0; i < sizes[2]; i++) {
        units[i]._id = i;
        units[i]._type = i;
        units[i]._reward = (char) (i + 1);
        units[i]._durability = i == 0 ? (char) 1 : (char) (i + 2);
        units[i]._count = 0;
    }
    /*
     * Default values for tokens
     */
    for (char i = 0; i < sizes[3]; i++) {
        tokens[i]._id = i;
        if (i < 2) {
            tokens[i]._count = 13;
        } else {
            tokens[i]._count = i == 3 ? (char) 5 : (char) 15;
        }
    }
    /*
     * Default values for cards
     */
    for (char i = 0; i < sizes[4]; i++) {
        cards[i]._id = i;
        //cards[i]._effect = i;
        cards[i]._description = i;
        cards[i]._cost = i; //todo change
    }
    save();
}


