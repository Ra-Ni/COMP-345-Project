#ifndef COMP_345_PROJECT_MAP_H
#define COMP_345_PROJECT_MAP_H
#include <string>
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

template<class T> struct Node {
    T _data;
    vector<Node<T>*> _edges;
    Node() = default;
    explicit Node(T data) {
        _data = data;
    }
};

template<class T> class Map {
private:
    int _size;
    struct Node<T>* _arr;
public:
    explicit Map(T identifier[], const int size) {
        _size = size;
        _arr = new Node<T>[size];
        for(int i = 0 ; i < size; i++) {
            _arr[i]._data = move(identifier[i]); //security issue, may need move();
        }
    }
    ~Map() {
        delete [] _arr;
        _arr = nullptr;
    }

    void link(int from, int to) {
        assert(from < _size && from >= 0);
        assert(to < _size && to >= 0);
        (_arr[from])._edges.push_back(&_arr[to]);
    }
    void print() {
        Node<T>* curr;
        auto* s = new string("");
        for(int i = 0; i < _size; i++) {
            curr = &_arr[i];
            auto j = curr->_edges.begin();
            s->append('\'' + curr->_data + '\'');
            if(j != curr->_edges.end()) {
                s->append(" -> ");
            }
            while (j != curr->_edges.end()) {
                s->append('\'' + (*j)->_data + '\'');
                if (++j != curr->_edges.end()) {
                    s->append(" -> ");
                }
            }
            s->append("\n");
        }
        cout << *s;
    }



};


/*
int main() {
    string s[5] = {"Manhatton", "Jersey", "id", "id1", "id2"};
    Map<string> g(s,5);
    g.link(0,1);
    g.link(0,2);
    g.link(1,3);
    g.link(4,3);
    g.print();
}

*/

#endif //COMP_345_PROJECT_MAP_H
