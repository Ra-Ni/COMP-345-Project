#include "Map.h"

bool Edge::comp_src(Edge e1, Edge e2) {
    return e1.src < e2.src;
}

bool Edge::comp_dest(Edge e1, Edge e2) {
    return e1.dest < e2.dest;
}

template<typename T>
Map<T>::Map(T *identifier, const int &size) {
    len = &size;
    nodes = &(*identifier);
    edges = new vector<Edge>;
    visited = new bool[*len];
}

template<typename T>
Map<T>::~Map() {
    delete edges;
    delete[] visited;
    len = nullptr;
    visited = nullptr;
    edges = nullptr;
    nodes = nullptr;
}

template<typename T>
void Map<T>::link(int from, int to) {
    assert(from < *len && from >= 0);
    assert(to < *len && to >= 0);
    edges->push_back(Edge{from, to});
    edges->push_back(Edge{to, from});
}

template<typename T>
void Map<T>::traverse() {
    bool flag = false;
    sort(edges->begin(), edges->end(), Edge::comp_dest);
    DFS(edges->at(0));
    for(int i = 0 ; i < *len ; i++) {
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

template<typename T>
void Map<T>::DFS(Edge start) {
    visited[start.src] = true;
    auto i = 0;
    Edge m;
    while (i < edges->size()) {
        m = edges->at(i);
        if (!visited[m.src] && visited[m.dest]) {
            DFS(m);
        }
        i++;
    }
}

template<typename T>
void Map<T>::print() {
    sort(edges->begin(), edges->end(), Edge::comp_src);
    auto itr = edges->begin();
    for(int i = 0 ; i < *len ; i++) {
        cout << nodes[i];
        while (itr != edges->end() && itr->src == i) {
            cout << " -> " << nodes[itr->dest];
            itr++;
        }
        cout << endl;
    }
}

template
class Map<string>;

template
class Map<int>;