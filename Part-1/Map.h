#ifndef COMP_345_PROJECT_MAP_H
#define COMP_345_PROJECT_MAP_H
#include <string>
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int src,dest;
    static bool comp_src(Edge e1, Edge e2);
    static bool comp_dest(Edge e1, Edge e2);
};

template<typename T> class Map {
private:
    const int* len;
    vector<T>* nodes;
    vector<Edge>* edges;
    bool* visited;
    void DFS(Edge start);
public:
    explicit Map(vector<T>* vnodes);
    ~Map();
    void link(int from, int to);
    void traverse();
    void print();
};
#endif //COMP_345_PROJECT_MAP_H
