#include "MapLoader.h"
#include <cassert>
using namespace std;

MapLoader::MapLoader() {
    in = new ifstream();
    t = nullptr;
    nodes = new vector<string>();
}

MapLoader::~MapLoader() {
    delete in;
    in = nullptr;
    delete nodes;
    nodes = nullptr;
    delete t;
    t = nullptr;
}

void MapLoader::open(const string file_path) {
    int i = static_cast<int>(file_path.length() - 4);
    assert(i > 0 && "File path is too short");
    string ext = ".map";
    for(int j = 0 ; j < 4; j++) {
        assert(file_path[i+j] == ext[j] && "File is not of type '.map'");
    }
    path = file_path;
    *in = ifstream(path,ifstream::binary);
    assert(!(in->fail()));

}

void MapLoader::load() {
    string flags[2] = {"<Territories>","<Map>"};
    bool cond[2] = {false,false};
    string s;
    int i = -1;
    int x;
    while(!in->eof() && (!(cond[0] && cond[1]))) {
        getline(*in,s);
        if(!cond[0] && s == flags[0]) {
            cond[0] = true;
        }
        else if(!cond[1] && s == flags[1]) {
            cond[1] = true;
        }
        else if(!s.empty()) {
            nodes->push_back(s);
        }
    }
    assert(cond[0] && cond[1] && "Markers are missing in selected file");
    t = new Map<string>(nodes);
    while(!in->eof()) {
        getline(*in,s);
        i = (int)s[0]-48;
        for(int j = 2 ; j < s.length(); j++) {
            x = (int)s[j]-48;
            assert(x >= 0 && x < nodes->size() && "File contains illegal link id");
            t->link(i,x);
        }
    }
}

void MapLoader::traverse() {
    t->traverse();
}

void MapLoader::print() {
    t->print();
}
