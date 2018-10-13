/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
/**
 * Driver tests the graphmap data structure attributes by creating two objects and seeing if they are connected.
 */
#include "graphmap.h"
#include <iostream>

using namespace std;

namespace part1 {
    int main() {
        cout << "Creating two objects\n" << endl;
        graphmap g(2);
        cout << "Linking object one to object two\n" << endl;
        g.link(0, 1);
        cout << "Adjacency List:\n" << g.to_string() << endl;
        cout << "\nIs this graph connected? " << (g.isGraphConnected() ? "Yes" : "No") << endl;
        cout << "\nLinking object two to object one\n" << endl;
        g.link(1, 0);
        cout << "Adjacency List:\n" << g.to_string() << endl;
        cout << "\nIs this graph connected? " << (g.isGraphConnected() ? "Yes" : "No") << endl;
        return 0;
    }
}