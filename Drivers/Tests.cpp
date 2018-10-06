#include "Tests.h"

void Tests::map() {
    cout << "Creating object Map<string> with pre-defined id elements:\n";
    string cases[5] = {"Manhattan","Bronx","Queens","Brooklyn","Staten Island"};
    int size = 5;
    for(int i = 0 ; i < size; i++) {
        cout << cases[i] << "\n";
    }
    Map<string> m(cases,size);
    cout << "\nLinking Manhattan and Bronx\n";
    m.link(0,1);
    cout << "Linking Manhattan and Queens\n";
    m.link(0,2);
    cout << "Linking Staten Island and Bronx\n";
    m.link(4,1);
    cout << "\nCurrent Adjacency List:\n";
    m.print();
    cout << "\nCalling DFS algorithm:\n";
    m.traverse();
    cout << "\nLinking Brooklyn and Bronx\n";
    m.link(3,1);
    cout << "\nCalling DFS algorithm:\n";
    m.traverse();
}
