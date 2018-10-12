//This is the header file for part 2 which implements the MapLoader
/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
#pragma once

#include <iostream>
#include <vector>

class graphmap;

class maploader { //This is implementing the map loader, it reads a map file, and check that if it is a connected map
    std::vector<std::string> ID;
    std::string path;
    graphmap *g{};


public:
    /**
     * default constructor for maploader
     */
    maploader() = default;

    /**
     * creates a maploader relevant to the pathname
     * @param pathname the path of the map file
     */
    explicit maploader(std::string &pathname);

    /**
     * Reading map file
     */
    void read();
    /**
     *  Printing the map
     */
    void print();
/**
 * checks whether or not the graph is connected
 * @return true if the map is connected
 */
    bool isConnected();
};
