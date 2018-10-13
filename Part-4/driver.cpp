/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */

/**
 *This is the driver for part 4 to test the player
 */
#include <iostream>
#include "player.h"

using namespace std;

namespace part4 {
    int main() {
        cout << "Creating Player object:\n";
        player p;
        cout << "Player object draws:\n";
        p.draw();
        cout << "Player object picks Jynx\n";
        p.requestToken("Jynx");
        cout << "Player object picks Sheriff\n";
        p.requestMonster("Sheriff");
        cout << "Player stats:\n";
        cout << p.to_string() << endl;
        return 0;
    }
}