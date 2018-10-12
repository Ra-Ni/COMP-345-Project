#include "shared.h"
#include "../Part-2/maploader.h"
#include <iostream>


shared::shared() {
    std::string s= "./Resources/King\ Of\ New\ York.map";
    m = new maploader(s);
}
