/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */

/**
 *This is the driver for part 2 to test the maploader
 */


#include "maploader.h"
#include <iostream>

using namespace std;
namespace part2 {
    int main() {
        cout << "Creating string path to King Of New York.map" << endl;
        string s = "../Resources/King Of New York.map";
        cout << "Creating maploader object containing file path" << endl;
        maploader m(s);
        cout << "Reading the file" << endl;
        m.read();
        cout << "Adjacency map:\n" << m.to_string();
        cout << "is map connected? " << (m.isConnected() ? "Yes" : "No") << endl;
        cout << "\n\nCreating new maploader object, with missing node 5 for all except node 6" << endl;
        s = "../Resources/bad.map";
        maploader m2(s);
        cout << "Reading the file" << endl;
        m2.read();
        cout << "Adjacency map:\n" << m2.to_string();
        cout << "is map connected? " << (m2.isConnected() ? "Yes" : "No") << endl;
        return 0;
    }
}