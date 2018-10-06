//
// Created by rrafid on 10/4/18.
//

#ifndef COMP_345_PROJECT_MAP_H
#define COMP_345_PROJECT_MAP_H
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <math.h>
#include <assert.h>
using namespace std;

class Map {
private:

    ifstream in;
    string path = "./Map.txt";
    string arr;
    int offset = -1;
    bool * visited;

    void sync() {
        string s;
        while(!in.eof()) {
            getline(in,s);
            if(offset == -1) {
                offset = (int)s.length();
            }
            arr.append(s);
        }
    }
    void DFS(int start) {
        int temp = start*offset;
        for(int i = temp ; i < temp+offset ; i ++) {
            bool t = arr[i] == '1';
            bool e = !visited[i%offset];
            if(t && e) {
                visited[i%offset] = true;
                DFS(i%offset);
            }
        }
    }
public:
    Map() {

        in.open(path);
        assert(!in.fail());
        sync();


    }
    Map(const string path) {
        (*this).path = path;
        in.open(path);
        assert(!in.fail());
        sync();
        in.close();
    }
    void traverse(int vertexNo) {
        //DFS
        visited = new bool[offset];
        for(int i = 0 ; i < offset; i++) {
            visited[i] = false;
        }
        visited[vertexNo] = true;
        DFS(vertexNo);
        bool v = visited[0];
        for(int i = 1; i < offset; i++) {
            v = v && visited[i];
        }
        cout << "The graph is connected? "<< v << endl;
    }


};

#endif //COMP_345_PROJECT_MAP_H
