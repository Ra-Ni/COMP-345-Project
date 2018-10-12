#include "graphmap.h"
#include <iostream>

graphmap::graphmap(char size) {
    nodes = new std::vector<char>[size];
    this->size = size;
    visited = new bool[size];
    for (int i = 0; i < size; i++) {
        *(visited + i) = false;
    }
}

graphmap::~graphmap() {
    delete[] nodes;
    delete[] visited;
    nodes = nullptr;
    visited = nullptr;

}

void graphmap::link(char n1, char n2) {
    nodes[n1].push_back(n2);
}

void graphmap::DFS(int start) {
    visited[start] = true;
    for (auto index : nodes[start]) {
        if (!visited[index]) {
            DFS(index);
        }
    }
}

bool graphmap::isGraphConnected() {
    bool flag = false;
    int i = 0;
    while (!flag && i < size) {
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

void graphmap::print() {
    for (char i = 0; i < size; i++) {
        std::cout << (int) i;
        for (auto index : nodes[i]) {
            std::cout << " -> " << (int) index;
        }
        std::cout << std::endl;
    }
}



