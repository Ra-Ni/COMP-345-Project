#pragma once

#include <vector>


class graphmap {
    std::vector<char> *nodes;
    bool *visited;
    char size;
    void DFS(int start);
public:
    explicit graphmap(char size);

    ~graphmap();

    void link(char n1, char n2);

    bool isGraphConnected();

    void print();
};
