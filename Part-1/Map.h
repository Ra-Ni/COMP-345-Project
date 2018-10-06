#ifndef COMP_345_PROJECT_MAP_H
#define COMP_345_PROJECT_MAP_H
#include <string>
#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
#include <algorithm>
#define forilen for(int i = 0 ; i < *len ; i++)
using namespace std;

struct Edge {
    int src,dest;
    static bool comp_src(Edge e1, Edge e2);
    static bool comp_dest(Edge e1, Edge e2);
};

template<typename T> class Map {
private:
    int* len;
    T* nodes;
    vector<Edge>* edges;
    vector<Edge>::iterator itr;
    bool* visited;
public:
    explicit Map(T identifier[], const int size);
    ~Map();
    void link(int from, int to);
    void traverse(int start);
    void DFS(int start);
    void print();
};
#endif //COMP_345_PROJECT_MAP_H
