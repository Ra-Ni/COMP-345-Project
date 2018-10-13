/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
 /**
  * This is the header file to implement the graphmap class
  */
#ifndef COMP_345_PROJECT_GRAPHMAP_H
#define COMP_345_PROJECT_GRAPHMAP_H

#include <vector>
#include <iostream>


class graphmap {
    std::vector<int> *nodes;
    bool *visited;
    int size;

    void DFS(int start);

public:
/**
 * Creates a graph of 'size' by 'size'
 * @param size the size of the 2-D graph
 */
    explicit graphmap(int size);

/**
 * Deallocates memory occupied by 'graphmap'
 */
    ~graphmap();

/**
 * Links node defined as 'n1' to node defined as 'n2 through a directional link
 * @param n1 the node at position 'n1'
 * @param n2 the node at position 'n2'
 */
    void link(int n1, int n2);

/**
 * Determines if graph is connected
 * @return true if it is connected, else false
 */
    bool isGraphConnected();

/**
 * Returns a string representation of the directional relation between nodes
 * @return string representation of the map
 */
    std::string to_string();
};

#endif