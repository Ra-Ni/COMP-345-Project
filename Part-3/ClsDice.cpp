//
// Created by mansoureh on 10/9/2018.
//
#include "ClsDice.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


ClsDice::ClsDice() {
    num = 1;
    srand(time(NULL));
    names[0] = "Energy";
    names[1] = "Attack";
    names[2] = "Destruction";
    names[3] = "Heal";
    names[4] = "Celebtity";
    names[5] = "Ouch!";
}


ClsDice::~ClsDice() {
}

int ClsDice::Roll() {
    /* initialize random seed: */
    num = rand() % 6 + 1;  // Generate Random Number Between 1,6
    return num;
}

char *ClsDice::GetName(int k) {
    return names[k - 1];
}