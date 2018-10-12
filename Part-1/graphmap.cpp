//This is the main file for part 1 which implements the Map Creation
/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */

#include "graphmap.h"
#include <iostream>

/**
 * Cunstructor for graphmap, creating a map with size number of nodes
 * @param size the number of nodes in the map
 */
graphmap::graphmap(char size) {
    nodes = new std::vector<char>[size]; // creation of a vector of nodes
    this->size = size;
    visited = new bool[size]; //This will make an array of booleans to check whether or not a node has been visited
    for (int i = 0; i < size; i++) {
        *(visited + i) = false;
    }
}

graphmap::~graphmap() {   // Destructor for graphmap objects

    delete[] nodes;
    delete[] visited;
    nodes = nullptr;
    visited = nullptr;

}

/**
 * this method inserts n2 after n1
 * @param n1 node 1
 * @param n2 node 2
 */
void graphmap::link(char n1, char n2) {
    nodes[n1].push_back(n2);
}

/**
 * This method will use DFS approach to evaluate the linkage between nodes
 * @param start the node where DFS starts evaluation
 */
void graphmap::DFS(int start) {
    visited[start] = true;
    for (auto index : nodes[start]) {
        if (!visited[index]) {
            DFS(index);
        }
    }
}

/**
 * This method will check whether or not the map is a connected map
 * @return true if the map is a connected map
 */
bool graphmap::isGraphConnected() {
    bool flag = false;
    int i = 0;
    while(!flag && i < size) {
        DFS(i++);
        for (char j = 0; j < size; j++) {
            if (!*(visited + j)) {
                flag = true;
            }
            *(visited + j) = false;
        }
    }

    return !flag;

}
/**
 * A method that shows the map
 */
void graphmap::print() {
    for (char i = 0; i < size; i++) {
        std::cout << (int) i;
        for (auto index : nodes[i]) {
            std::cout << " -> " << (int) index;
        }
        std::cout << std::endl;
    }
}



