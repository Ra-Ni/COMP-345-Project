#include "stack.h"
#include "tile.h"
#include "monster.h"
#include <pthread.h>
#include "token.h"

using namespace std;

std::string type[3] = {"Health", "Victory", "Energy"};
std::string buildingID[3] = {"Hospital", "High Rise", "Power Plant"};
std::string unitID[3] = {"Infantry", "Tank", "Jet"};
unsigned char var[5] = {0, 1, 2, 3, 4};
//------------------------------------
//health and vp
unsigned char monsterparams[21] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
//names
string monsterID[] = {"Sheriff", "Drakonis", "Captain Fish", "Mantis", "Rob", "Kong"};
//-------------------------------------
string tokens[] = {"Web", "Jynx", "Souvenir", "Carpace"};

int main() {
    signed char c;
    c = 2;
    bool t = false;
    monster m(monsterID[0], monsterparams[10], monsterparams[0]);
    cout << m << endl;
    tile taa(type[0], buildingID[0], var[1], var[1], t);
    cout << taa << endl;
    unsigned char cd = 12;
    token a(tokens[0], cd);
    cout << a << endl;
    a.decrement();
    cout << a;
}