#ifndef COMP_345_PROJECT_TOKEN_H
#define COMP_345_PROJECT_TOKEN_H
#endif

#include <string>

class token {
    const std::string *_id;
    unsigned char *_count;

public:
    token() :
            _id(nullptr),
            _count(nullptr) {
    }

    token(const std::string &id, unsigned char &count) :
            _id(&id),
            _count(&count) {
    }

    ~token() {
        _id = nullptr;
        _count = nullptr;
    }

    const unsigned char &count() {
        return *_count;
    }

    const std::string &id() {
        return *_id;
    }

    bool decrement() {
        if (*_count > 0) {
            (*_count)--;
            return true;
        }
        return false;
    }

    friend std::ostream &operator<<(std::ostream &out, const token &t);
};

std::ostream &operator<<(std::ostream &out, const token &t) {
    out << *t._id << " Token \n\tCount: " << (int) *t._count;
    return out;
}