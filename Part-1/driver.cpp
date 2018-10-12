#include "graphmap.h"

#include <iostream>

using namespace std;

namespace part1 {
    int main() {
        cout << "Creating two objects\n" << endl;
        graphmap g(2);
        cout << "Linking object one to object two\n" << endl;
        g.link(0, 1);
        cout << "Adjacency List:" << endl;
        g.print();
        cout << "\nIs this graph connected? " << (g.isGraphConnected() ? "Yes" : "No") << endl;
        cout << "\nLinking object two to object one\n" << endl;
        g.link(1, 0);
        cout << "Adjacency List:" << endl;
        g.print();
        cout << "\nIs this graph connected? " << (g.isGraphConnected() ? "Yes" : "No") << endl;
        return 0;
    }
}