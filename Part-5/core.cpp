#include "core.h"
#include "structures.h"
#include "constants.h"
#include <fstream>
#include <cstring>
#include <string>

using namespace std;


core::~core() {
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

void core::load() {
    ifstream ifs("./Resources/core.so", ios::binary);
    ifs.read((char *) &sizes, sizeof(sizes));

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

void core::save() {
    ofstream ofs("./Resources/core.so", ios::binary);
    ofs.write((char *) &sizes, sizeof(sizes));

    for (int i = 0; i < sizes[0]; i++) {
        if (&monsters[i] != nullptr) {
            ofs.write((char *) &monsters[i], sizeof(monsters));
        }
    }
    for (int i = 0; i < sizes[1]; i++) {
        if (&buildings[i] != nullptr) {
            ofs.write((char *) &buildings[i], sizeof(buildings));
        }
    }
    for (int i = 0; i < sizes[2]; i++) {
        ofs.write((char *) &units[i], sizeof(units));
    }
    for (int i = 0; i < sizes[3]; i++) {
        if (&tokens[i] != nullptr) {
            ofs.write((char *) &tokens[i], sizeof(tokens));
        }
    }
    for (int i = 0; i < sizes[4]; i++) {
        if (&cards[i] != nullptr) {
            ofs.write((char *) &cards[i], sizeof(cards));
        }
    }
    ofs.close();
}

void core::reset() {

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

    for (char i = 0; i < sizes[0]; i++) {
        monsters[i]._id = i;
        monsters[i]._victory_points = 0;
        monsters[i]._health = 10;
        monsters[i]._taken = false;
    }
    for (char i = 0; i < sizes[1]; i++) {
        buildings[i]._id = (char) (i % 3);
        buildings[i]._type = (char) (i % 3);
        buildings[i]._reward = (char) ((i / 3) + 1);
        buildings[i]._durability = (char) ((i / 3) + 1);
        buildings[i]._count = 5;
    }

    for (char i = 0; i < sizes[2]; i++) {
        units[i]._id = i;
        units[i]._type = i;
        units[i]._reward = (char) (i + 1);
        units[i]._durability = i == 0 ? (char) 1 : (char) (i + 2);
        units[i]._count = 0;
    }
    for (char i = 0; i < sizes[3]; i++) {
        tokens[i]._id = i;
        if (i < 2) {
            tokens[i]._count = 13;
        } else {
            tokens[i]._count = i == 3 ? (char) 5 : (char) 15;
        }
    }
    for (char i = 0; i < sizes[4]; i++) {
        cards[i]._id = i;
        cards[i]._effect = i;
        cards[i]._description = i;
    }
    save();
}


void core::print() {
    constants translations;
    cout << "MONSTERS\n";
    for (char i = 0; i < sizes[0]; i++) {
        cout << "\tName: "
             << translations.monsterID[monsters[i]._id]
             << "\n\t\tHealth: "
             << (int) monsters[i]._health
             << "\n\t\tVictory Points: "
             << (int) monsters[i]._victory_points
             << '\n';
    }
    cout << "\nBUILDINGS\n";
    for (char i = 0; i < sizes[1]; i++) {
        cout << "\tName: "
             << translations.buildingID[buildings[i]._id]
             << "\n\t\tType: "
             << translations.genericType[buildings[i]._type]
             << "\n\t\tDurability: "
             << (int) buildings[i]._durability
             << "\n\t\tReward: "
             << '+'
             << (int) buildings[i]._reward
             << ' '
             << translations.genericType[buildings[i]._type]
             << "\n\t\tCount: "
             << (int) buildings[i]._count
             << '\n';
    }
    cout << "\nUNITS\n";
    for (char i = 0; i < sizes[2]; i++) {
        cout << "\tName: "
             << translations.unitID[units[i]._id]
             << "\n\t\tType: "
             << translations.genericType[units[i]._type]
             << "\n\t\tDurability: "
             << (int) units[i]._durability
             << "\n\t\tReward: "
             << '+'
             << (int) units[i]._reward
             << ' '
             << translations.genericType[units[i]._type]
             << "\n\t\tCount: "
             << (int) units[i]._count
             << '\n';
    }
    cout << "\nTOKENS\n";
    for (char i = 0; i < sizes[3]; i++) {
        cout << "\tName: "
             << translations.tokenID[tokens[i]._id]
             << "\n\t\tCount: "
             << (int) tokens[i]._count
             << '\n';
    }
    cout << "\nCARDS\n"
         << "\tTBD";

    for (char i = 0; i < sizes[4]; i++) {
        cout << "\tName: "
             << cards[i]._id
             << "\n\t\tDescription: "
             << cards[i]._description
             << "\n\t\tEffect: "
             << cards[i]._effect
             << '\n';
    }

}
