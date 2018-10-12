#include "maploader.h"
#include "../Part-1/graphmap.h"
#include <fstream>

using namespace std;
/**
 *
 * @param pathname
 */
maploader::maploader(const std::string &path) {
    this->path = path;
}

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

const std::string maploader::to_string() {
    string s = g->to_string();
    int i = 0;
    for (string &id : ID) {
        s+= id + '(' + std::to_string(i++) + ")\n";
    }
    return s;
}

bool maploader::isConnected() {
    return g->isGraphConnected();
}

