#ifndef COMP_345_PROJECT_MAPLOADER_H
#define COMP_345_PROJECT_MAPLOADER_H
#include "../Part-1/Map.h"
#include <fstream>

class MapLoader {

private:
    std::string path;
    std::ifstream* in;
    char* buffer;
    int* size;
    Map<std::string>* t;
    std::vector<std::string>* nodes;


public:
    MapLoader();
    ~MapLoader();
    void open(const std::string file_path);
    void parse();
};

#endif //COMP_345_PROJECT_MAPLOADER_H
