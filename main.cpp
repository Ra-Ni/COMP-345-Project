//
// Created by rrafid on 10/8/18.
//
#include "Part-5/core.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    core c{};
    c.load();
}
/*
int main() {
    monster m{};
    strcpy(m._id,"Sheriff");
    m._victory_points = 0;
    m._health = 10;

    ofstream ofs("monster.dat", ios::binary);
    ofs.write((char *)&m, sizeof(m));
    ofs.close();

    monster m2{};
    ifstream ifs("monster.dat",ios::binary);
    ifs.read((char *)&m2, sizeof(m2));

    cout << (int)m2._health << endl;
    cout << (int)m2._victory_points << endl;
    cout << m2._id << endl;

}*/