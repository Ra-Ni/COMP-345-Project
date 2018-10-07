#ifndef COMP_345_PROJECT_MAPLOADER_H
#define COMP_345_PROJECT_MAPLOADER_H
#include "../Part-1/Map.h"
#include <dirent.h>
#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

class MapLoader {

private:
    string path;
    ifstream* in;
    char* buffer;
    int* size;
    Map<string>* t;
    vector<string>* nodes;


public:
    MapLoader() {
        in = new ifstream();
        size = new int();
        buffer = nullptr;
        t = nullptr;
        nodes = new vector<string>();

    }

    ~MapLoader() {
        delete nodes;
        nodes = nullptr;
        delete in;
        in = nullptr;
        delete [] buffer;
        buffer = nullptr;
        delete size;
        size = nullptr;
    }

    void open(const string file_path) {
        int i = file_path.length() - 4;
        assert(i > 0);

        string ext = ".map";
        for(int j = 0 ; j < 4; j++) {
            assert(file_path[i+j] == ext[j]);
        }

        path = file_path;
        *in = ifstream(path,ifstream::binary);
        assert(!(in->fail()));

    }

    void parse() {
        string flags[2] = {"<Territories>","<Map>"};
        string s;
        bool flag1 = false;
        bool flag2 = false;
        while(!in->eof() && (!flag2 || !flag1)) {
            getline(*in,s);
            if(!flag1 && s.compare(flags[0]) == 0) {
                flag1 = true;
            }
            else if(!flag2 && s.compare(flags[1]) == 0) {
                flag2 = true;
            }
            else if(s.compare("") != 0) {
                nodes->push_back(s);
            }
        }
        assert(flag1 && flag2);
        t = new Map<string>(nodes);
        int i = -1;
        while(!in->eof()) {
            getline(*in,s);
            i = (int)s[0]-48;
            for(int j = 2 ; j < s.length(); j++) {
                int x = (int)s[j]-48;
                t->link(i,x);
            }
        }

        t->print();
        t->traverse();

    }
};


int main() {
    MapLoader m;
    m.open("./Resources/King\ Of\ New\ York.map") ;
    m.parse();

}

#endif //COMP_345_PROJECT_MAPLOADER_H
