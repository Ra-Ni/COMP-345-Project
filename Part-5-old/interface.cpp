#include "interface.h"
#include "constants.h"


interface::interface() {
    names = new constants();
}

interface::~interface() {
    delete names;
    names = nullptr;
}

const monster &interface::requestMonster(std::string &name) {
    return monsterAt(0);
}

const card &interface::drawCard() {
    return cardAt(0);
}

void interface::print() {
        std::cout << "MONSTERS\n";
        for (char i = 0; i < sizes[0]; i++) {
            std::cout << "\tName: "
                 << names->monsterID[monsters[i]._id]
                 << "\n\t\tHealth: "
                 << (int) monsters[i]._health
                 << "\n\t\tVictory Points: "
                 << (int) monsters[i]._victory_points
                 << '\n';
        }
        std::cout << "\nBUILDINGS\n";
        for (char i = 0; i < sizes[1]; i++) {
            std::cout << "\tName: "
                 << names->buildingID[buildings[i]._id]
                 << "\n\t\tType: "
                 << names->genericType[buildings[i]._type]
                 << "\n\t\tDurability: "
                 << (int) buildings[i]._durability
                 << "\n\t\tReward: "
                 << '+'
                 << (int) buildings[i]._reward
                 << ' '
                 << names->genericType[buildings[i]._type]
                 << "\n\t\tCount: "
                 << (int) buildings[i]._count
                 << '\n';
        }
        std::cout << "\nUNITS\n";
        for (char i = 0; i < sizes[2]; i++) {
            std::cout << "\tName: "
                 << names->unitID[units[i]._id]
                 << "\n\t\tType: "
                 << names->genericType[units[i]._type]
                 << "\n\t\tDurability: "
                 << (int) units[i]._durability
                 << "\n\t\tReward: "
                 << '+'
                 << (int) units[i]._reward
                 << ' '
                 << names->genericType[units[i]._type]
                 << "\n\t\tCount: "
                 << (int) units[i]._count
                 << '\n';
        }
        std::cout << "\nTOKENS\n";
        for (char i = 0; i < sizes[3]; i++) {
            std::cout << "\tName: "
                 << names->tokenID[tokens[i]._id]
                 << "\n\t\tCount: "
                 << (int) tokens[i]._count
                 << '\n';
        }
        std::cout << "\nCARDS\n";
        for (char i = 0; i < sizes[4]; i++) {
            std::cout << "\tName: "
                 << names->cardID[cards[i]._id]
                 << "\n\t\tDescription: "
                 << names->cardDescription[cards[i]._description]
                 //<< "\n\t\tEffect: "
                 //<< cards[i]._effect
                 << '\n';
        }

    }
