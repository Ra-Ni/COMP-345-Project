//
// Created by rrafid on 10/7/18.
//

#ifndef COMP_345_PROJECT_SP_H
#define COMP_345_PROJECT_SP_H

template<class T>
class SP {
private:
    T* ptr;
public:
    SP() : ptr(nullptr) {
    }
    SP(T* data) : ptr (data) {
    }
    ~SP() {
        delete ptr;
    }
    T& operator*() {
        return *ptr;
    }
    T* operator->() {
        return ptr;
    }
};


#endif //COMP_345_PROJECT_SP_H
