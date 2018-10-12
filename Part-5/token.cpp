#include "token.h"

const std::string token::id() {
    return _id;
}

const std::string token::to_string() {
    return "Name: " + _id + '\n';
}

