/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 *This is the driver file that tests part 5, it creates different objects of different elements
 * and shows the information of them using the toString methods.
 */

#include "buildingdeck.h"
#include "carddeck.h"
#include "monsterdeck.h"
#include "tokendeck.h"
#include <iostream>

using namespace std;

namespace part5 {
    int main() {
        cout << "Creating building deck:\n";
        buildingdeck b;
        cout << b.to_string();
        cout << "\n\n\nCreating card deck:\n";
        carddeck c;
        cout << c.to_string();
        cout << "\n\n\nCreating monster deck:\n";
        monsterdeck m;
        cout << m.to_string();
        cout << "\n\n\nCreating token deck:\n";
        tokendeck t;
        cout << t.to_string();
        cout << endl;
        return 0;
    }
}