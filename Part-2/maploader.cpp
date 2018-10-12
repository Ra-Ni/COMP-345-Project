//This is the main file for part 2 which implements the MapLoader
/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */

#include "maploader.h"
#include "../Part-1/graphmap.h"
#include <fstream>

using namespace std;

/**
 * Gets a path as a parameter and load the map file from that path
 * @param pathname the map file's path
 */
maploader::maploader(std::string &pathname) {
    this->path = pathname;
}

/**
 * Reading the map file
 */
void maploader::read() {
    std::ifstream in(path, std::ios::in);
    if (in.fail()) {  //To make sure that the file has been opened with no problem
        std::cout << "Failed to open the file" << std::endl;
        exit(-1);
    }
    bool flag[2] = {false, false};
    std::string s;
    while (!in.eof() && !(flag[0] && flag[1])) {  // reading the file line by line
        getline(in, s);
        if (s == "<Territories>\r") {
            flag[0] = true;
        } else if (s == "<Map>\r") {
            flag[1] = true;
        } else if (!s.empty()) {
            ID.push_back(s);
        }
    }

    if (!(flag[0] && flag[1])) {
        std::cout << "File is invalid" << std::endl;
        exit(-1);
    }

    g = new graphmap((char) ID.size());
    while (!in.eof()) {
        getline(in, s);
        if (s.empty()) {
            continue;
        }
        char node = (char) (s.at(0) - 48);
        s = s.substr(2, s.size());
        for (char index : s) {
            if (index - 48 > ID.size() || index - 48 < 0) {
                std::cout << "File is invalid" << std::endl;
            }
            g->link(node, (char) (index - 48));
        }
    }
    in.close();
}
/**
 * printing the graphmap
 */
void maploader::print() {
    g->print();
    int i = 0;
    for (string &id : ID) {
        std::cout << id << '(' << i++ << ')' << std::endl;
    }
}

/**
 * checks whether or not the graph is connected
 * @return true if the graph is connected
 */
bool maploader::isConnected() {
    return g->isGraphConnected();
}

graphmap& maploader::get() {
    return *g;
}

