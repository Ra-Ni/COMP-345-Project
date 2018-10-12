#pragma once

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
