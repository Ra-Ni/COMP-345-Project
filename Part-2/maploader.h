#ifndef COMP_345_PROJECT_MAPLOADER_H
#define COMP_345_PROJECT_MAPLOADER_H

#include "../Part-1/graphmap.h"
#include <iostream>
#include <vector>


class maploader {
    std::vector<std::string> ID;
    std::string path;
    graphmap *g;


public:

    explicit maploader(const std::string &path);

    void read();

    bool isConnected();

    const std::string to_string();
};

#endif
