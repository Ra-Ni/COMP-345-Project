/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is the header file for part 2 to implement the maploader
 */
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
/**
 * Creates a maploader relevant to the pathname
 * @param path of the map file
 */
    explicit maploader(const std::string &path);

/**
 * Reads map file
 */
    void read();

/**
 * Checks whether or not the graph is connected
 * @return true if the map is connected
 */
    bool isConnected();

/**
 * Returns a string representation of the current map
 * @return string mapping
 */
    const std::string to_string();
};

#endif
