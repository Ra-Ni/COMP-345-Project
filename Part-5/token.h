#ifndef COMP_345_PROJECT_TOKEN_H
#define COMP_345_PROJECT_TOKEN_H
#include <iostream>

class token {
    std::string _id;

public:
    explicit token(std::string id) : _id(move(id)) {
    }
    const std::string id();

    const std::string to_string();
};


#endif