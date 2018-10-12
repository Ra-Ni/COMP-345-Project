#ifndef COMP_345_PROJECT_MAPLOADER_H
#define COMP_345_PROJECT_MAPLOADER_H

#include <iostream>
#include <vector>

class graphmap;

class maploader {
    std::vector<std::string> ID;
    std::string path;
    graphmap *g{};


public:
    maploader() = default;

    explicit maploader(std::string &pathname);

    void read();

    void print();

    bool isConnected();
};

#endif
