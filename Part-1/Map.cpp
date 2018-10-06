#include "Map.h"

bool Edge::comp_src(Edge e1, Edge e2) {
    return e1.src < e2.src;
}

bool Edge::comp_dest(Edge e1, Edge e2) {
    return e1.dest < e2.dest;
}

template<typename T>
Map<T>::Map(T *identifier, const int size) {
    len = new int(size);
    nodes = new T[*len];
    forilen {
        nodes[i] = identifier[i];
    }
    edges = new vector<Edge>;
    itr = edges->begin();
    visited = new bool[*len];
}

template<typename T>
Map<T>::~Map() {
    delete [] nodes;
    delete len;
    delete edges;
    delete [] visited;
    len = nullptr;
    visited = nullptr;
    edges = nullptr;
    nodes = nullptr;
}

template<typename T>
void Map<T>::link(int from, int to) {
    assert(from < *len && from >= 0);
    assert(to < *len && to >= 0);
    edges->push_back(Edge{from,to});
    edges->push_back(Edge{to,from});
}

template<typename T>
void Map<T>::traverse(int start) {
    assert(start < *len && start >= 0);
    sort(edges->begin(),edges->end(),Edge::comp_dest);
    DFS(start);
    bool flag = false;
    forilen {
        if(!visited[i]) {
            cout << "Couldn't traverse " << nodes[i] << endl;
            if(!flag) {
                flag = true;
            }
        }

    };
    if(flag) {
        cout << "Graph is not connected." << endl;
    }
}

template<typename T>
void Map<T>::DFS(int start) {
    Edge e = edges->at(start);
    visited[start] = true;
    int i = start+1;
    while(i < edges->size()) {
        if(!visited[edges->at(i).dest]) {
            DFS(edges->at(i).dest);
        }
        i++;
    }
}

template<typename T>
void Map<T>::print() {
    sort(edges->begin(),edges->end(),Edge::comp_src);
    itr = edges->begin();
    forilen {
        cout << nodes[i];
        while(itr != edges->end() && itr->src == i) {
            cout << " -> " << nodes[itr->dest];
            itr++;
        }
        cout << endl;
    }
}