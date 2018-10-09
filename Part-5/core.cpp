#include "core.h"
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

void core::load() {
    ifstream ifs("./Resources/core.so", ios::binary);
    ifs.read((char *) &_monsters, sizeof(_monsters));
    ifs.read((char *) &_buildings, sizeof(_buildings));
    ifs.read((char *) &_cards, sizeof(_cards));
    ifs.read((char *) &_units, sizeof(_units));
    ifs.read((char *) &_tokens, sizeof(_tokens));
    ifs.close();
}

void core::save() {
    ofstream ofs("./Resources/core.so", ios::binary);
    ofs.write((char *) &_monsters, sizeof(_monsters));
    ofs.write((char *) &_buildings, sizeof(_buildings));
    ofs.write((char *) &_cards, sizeof(_cards));
    ofs.write((char *) &_units, sizeof(_units));
    ofs.write((char *) &_tokens, sizeof(_tokens));
    ofs.close();
}

void core::reset() {
    char i = 0;
    for (auto &monster : _monsters) {
        monster._id = i++;
        monster._victory_points = 0;
        monster._health = 10;
    }
    i = 0;
    for (auto &building : _buildings) {
        building._id = (char)(i%3);
        building._type = building._id;
        building._reward = (char)((i/3) + 1);
        building._durability = building._reward;
        building._count = 5;
        i++;
    }
    i = 0;
    for (auto &unit : _units) {
        unit._id = i;
        unit._type = unit._id;
        unit._durability = i == 0 ? (char)1 : (char)(i + 2);
        unit._count = 0;
        i++;
    }
    i = 0;
    for(auto &token : _tokens) {
        token._id = i;
        if(i < 2) {
            token._count = 13;
        }
        else {
            token._count = i == 3 ? (char)5 : (char)15;
        }
        i++;
    }
    i = 0;
    for(auto &card : _cards) {
        card._id = i++;
        card._effect = card._id;
        card._description = card._id;
    }
    save();
}


/*
void system::print() {
    cout << "MONSTERS\n";
    for (auto &_monster : _monsters) {
        cout << "\tName: "
             << _monster._id
             << "\n\t\tHealth: "
             << (int) _monster._health
             << "\n\t\tVictory Points: "
             << (int) _monster._victory_points
             << '\n';
    }
    cout << "\nBUILDINGS\n";
    for (auto &tile : _buildings) {
        cout << "\tName: "
             << tile._id
             << "\n\t\tType: "
             << tile._type
             << "\n\t\tDurability: "
             << (int) tile._durability
             << "\n\t\tReward: "
             << '+'
             << (int) tile._reward
             << ' '
             << tile._type
             << "\n\t\tCount: "
             << (int) tile._count
             << '\n';
        }
    cout << "\nUNITS\n";
    for (auto &tile : _units) {
        cout << "\tName: "
             << tile._id
             << "\n\t\tType: "
             << tile._type
             << "\n\t\tDurability: "
             << (int) tile._durability
             << "\n\t\tReward: "
             << '+'
             << (int) tile._reward
             << ' '
             << tile._type
             << "\n\t\tCount: "
             << (int) tile._count
             << '\n';
    }
    cout << "\nTOKENS\n";
    for(auto &token : _tokens) {
        cout << "\tName: "
             << token._id
             << "\n\t\tCount: "
             << (int)token._count
             << '\n';
    }
    cout << "\nCARDS\n"
         << "\tTBD";

    for(auto &card : _cards) {
        cout << "\tName: "
             << card._id
             << "\n\t\tDescription: "
             << card._description
             << "\n\t\tEffect: "
             << card._effect
             << '\n';
    }
    */

