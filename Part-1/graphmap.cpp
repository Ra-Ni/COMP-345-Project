#include "graphmap.h"

/**
 * Creates an array of vectors pointed to by the 'nodes' pointer
 * Each position of the array contains a vector of integers that refer to the index of the array's adjacent relations
 * @param size the size of the 2-D graph
 */
graphmap::graphmap(int size) {
    nodes = new std::vector<int>[size];
    this->size = size;
    visited = new bool[size];
    for (int i = 0; i < size; i++) {
        *(visited + i) = false;
    }
}

/**
 * Deallocates memory occupied by 'nodes' and 'visited' pointer
 */
graphmap::~graphmap() {
    delete[] nodes;
    delete[] visited;
    nodes = nullptr;
    visited = nullptr;

}

/**
 * Links nodes by pushing 'n2' to the back of vector at position 'n1'
 * @param n1 the vector element
 * @param n2 the index of the vector element to refer to
 */
void graphmap::link(int n1, int n2) {
    nodes[n1].push_back(n2);
}

/**
 * Initiates a depth first search of a starting element in the array
 * Performs recursive traversal from the 'start' to other adjacent nodes it finds that have not been visited yet
 * @param start the node at position 'start'
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
 * Performs depth-first search on all vertices, as long as the flag has not been raised
 * This must be done for all nodes/vertices since the graph is directional
 * @return true if it is connected, else false
 */
bool graphmap::isGraphConnected() {
    bool flag = false;
    int i = 0;
    while (!flag && i < size) {
        DFS(i++);
        for (int j = 0; j < size; j++) {
            if (!*(visited + j)) {
                flag = true;
            }
            *(visited + j) = false;
        }
    }

    return !flag;

}

/**
 * Returns a string representation of the directional relation between nodes
 * @return string representation of the map
 */
std::string graphmap::to_string() {
    std::string s;
    for (int i = 0; i < size; i++) {
        s += std::to_string(i);
        for (auto index : nodes[i]) {
            s += " -> " + std::to_string(index);
        }
        s += '\n';
    }
    return s;
}



