#include "maploader.h"
#include "../Part-1/graphmap.h"
#include <fstream>

using namespace std;

/**
 * Creates a maploader relevant to the pathname
 * @param path of the map file
 */
maploader::maploader(const std::string &path) {
    this->path = path;
}
/**
 * Creates an ifstream to check if the file is good
 * If the file is good, reads the file and sets flag for appropriate headers
 * If either flag is false, then send out a file is invalid message and exit
 * Creates a new map of size equivalent to the attributes in territories
 * Links the appropriate parameters together using graphmap (Part1)
 */
void maploader::read() {
    std::ifstream in(path, std::ios::in);
    if (in.fail()) {
        std::cout << "Failed to open the file" << std::endl;
        exit(-1);
    }
    bool flag[2] = {false, false};
    std::string s;
    while (!in.eof() && !(flag[0] && flag[1])) {
        getline(in, s);
        if (s == "<Territories>") {
            flag[0] = true;
        } else if (s == "<Map>") {
            flag[1] = true;
        } else if (!s.empty()) {
            ID.push_back(s);
        }
    }

    if (!(flag[0] && flag[1])) {
        std::cout << "File is invalid" << std::endl;
        exit(-1);
    }

    g = new graphmap((int)ID.size());
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
 * Checks whether or not the graph is connected
 * @return true if the map is connected
 */
bool maploader::isConnected() {
    return g->isGraphConnected();
}

/**
 * Returns a string representation of the current map
 * @return string mapping
 */
const std::string maploader::to_string() {
    string s = g->to_string();
    int i = 0;
    for (string &id : ID) {
        s += id + '(' + std::to_string(i++) + ")\n";
    }
    return s;
}



