#ifndef COMP_345_PROJECT_INTERFACE_H
#define COMP_345_PROJECT_INTERFACE_H
#include "controller.h"
#include "constants.h"
#ifndef __IOSTREAM_H
#include <iostream>
#endif


class interface : private controller {
    constants* names;
public:
    interface();
    ~interface();
    const monster& requestMonster(std::string& name);
    const card& drawCard();
    void print();

};

#endif