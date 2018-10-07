#include "Map.h"
#include <algorithm>
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

bool Edge::comp_src(Edge e1, Edge e2) {
    return e1.src < e2.src;
}

bool Edge::comp_dest(Edge e1, Edge e2) {
    return e1.dest < e2.dest;
}

template<typename T> Map<T>::Map(vector<T>* vnodes) {
    nodes = vnodes;
    edges = new vector<Edge>;
    visited = new bool[vnodes->size()];
}

template<typename T> Map<T>::~Map() {
    delete edges;
    delete[] visited;
    visited = nullptr;
    edges = nullptr;
    nodes = nullptr;
}

template<typename T> void Map<T>::link(int from, int to) {
    assert(from < nodes->size() && from >= 0);
    assert(to < nodes->size() && to >= 0);
    edges->push_back(Edge{from, to});
}

template<typename T> void Map<T>::traverse() {
    bool flag = false;
    sort(edges->begin(), edges->end(), Edge::comp_dest);
    DFS(edges->at(0));
    for(int i = 0 ; i < nodes->size() ; i++) {
        if (!visited[i]) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "Graph is not connected." << endl;
    }
    else {
        cout << "Graph is connected" << endl;
    }
}

template<typename T> void Map<T>::DFS(Edge start) {
    visited[start.src] = true;
    unsigned long i = 0;
    Edge m{};
    while (i < edges->size()) {
        m = edges->at(i);
        if (!visited[m.src] && visited[m.dest]) {
            DFS(m);
        }
        i++;
    }
}

template<typename T> void Map<T>::print() {
    sort(edges->begin(), edges->end(), Edge::comp_src);
    auto itr = edges->begin();
    for(int i = 0 ; i < nodes->size() ; i++) {
        std::cout << (*nodes)[i];
        while (itr != edges->end() && itr->src == i) {
            std::cout << " -> " << (*nodes)[itr->dest];
            itr++;
        }
        std::cout << std::endl;
    }
}

template class Map<std::string>;