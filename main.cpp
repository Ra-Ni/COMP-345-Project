//
// Created by rrafid on 10/8/18.
//
#include "Part-5/core.h"
#include <iostream>
#include <fstream>
#include "./Drivers/Tests.h"
using namespace std;

int main() {
    Tests::part5();

}

/*
int main() {
    monster monsters{};
    strcpy(monsters._id,"Sheriff");
    monsters._victory_points = 0;
    monsters._health = 10;

    ofstream ofs("monster.dat", ios::binary);
    ofs.write((char *)&monsters, sizeof(monsters));
    ofs.close();

    monster m2{};
    ifstream ifs("monster.dat",ios::binary);
    ifs.read((char *)&m2, sizeof(m2));

    cout << (int)m2._health << endl;
    cout << (int)m2._victory_points << endl;
    cout << m2._id << endl;

}*/