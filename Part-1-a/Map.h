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
    static bool comp_src(Edge e1, Edge e2) {
        return e1.src < e2.src;
    }
    static bool comp_dest(Edge e1, Edge e2) {
        return e1.dest < e2.dest;
    }
};

template<typename T> class Map {
private:
    int* len;
    T* nodes;
    vector<Edge>* edges;
    vector<Edge>::iterator itr;
    bool* visited;

public:
    explicit Map(T identifier[], const int size) {
        len = new int(size);
        nodes = new T[*len];
        forilen {
            nodes[i] = identifier[i];
        }
        edges = new vector<Edge>;
        itr = edges->begin();
        visited = new bool[*len];
    }
    ~Map() {
        delete [] nodes;
        delete len;
        delete edges;
        delete [] visited;
        len = nullptr;
        visited = nullptr;
        edges = nullptr;
        nodes = nullptr;
    }
    void link(int from, int to) {
        assert(from < *len && from >= 0);
        assert(to < *len && to >= 0);
        edges->push_back(Edge{from,to});
        edges->push_back(Edge{to,from});
    }

    void traverse(int start) {
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
    void DFS(int start) {
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
    void print() {
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

};



int main() {
    string s[5] = {"Manhatton", "Jersey", "id", "id1", "id2"};
    Map<string> g(s,5);
    g.link(0,1);
    g.link(1,2);
    g.print();
    g.traverse(3);

}



#endif //COMP_345_PROJECT_MAP_H
