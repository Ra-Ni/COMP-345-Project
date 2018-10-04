//
// Created by rrafid on 10/1/18.
//

#ifndef COMP_345_PROJECT_MAP_H
#define COMP_345_PROJECT_MAP_H
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;
template <class T> class Map {
private:
    class Node {
    private:
        T *_data;
        vector<Node*> _adj;
    public:
        Node( ) = default;
        explicit Node(const T& data) {
            _data = data;
        }
        void addAdj(Node adj) {
            Node* ptr = &adj;
            _adj.push_back(ptr);
        }
        //todo: erase
        void changeName(T* name) {
            _data = name;
        }
    };

    class sNode : Node {
    private:
        enum Region{Lower,Midtown,Upper};
        Region *_space[2];

    public:

        sNode() {
            for (Region *in : _space) {
                in = Region::Lower;
            }
        }

        explicit sNode(const T& data) : Node(data) {
            this();
        }
    };
private:
    Node* _curr;
    Node* _head;
    int* _size;
public:
    Map() {
        Node nodes[4];
        nodes[0].changeName(new string("Manhatton"));
        nodes[1].changeName(new string("Staten Island"));
        nodes[2].changeName(new string("Bronx"));
        nodes[3].changeName(new string("Queens"));
        nodes[4].changeName(new string("Brooklyn"));

        nodes[1].addAdj(nodes[0]);
        _head = &nodes[0];
    }
    explicit Map (const int &size) {
        _size = size;
        Node nodes[*_size];
        /**
        for(Node in : nodes) {
            in = new Node();
        }**/
        _head = &nodes[0];
    }
    Map (const int &size, bool isKONY) {
        if(!isKONY) {
            this(size);
        }
        else {
            *_size = size;
            Node nodes[*_size];
            nodes[0] = new sNode();
            _head = &nodes[0];
            /**for (int i = 1 ; i < *_size; i++) {
                _zones[i] = new Node();
            }**/
        }
    }
};

int main() {
    auto * foo = new Map<string>();



}


#endif //COMP_345_PROJECT_MAP_H
