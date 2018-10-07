#include "Tests.h"
#include <iostream>
using namespace std;

void Tests::map() {
    cout << "Creating object Map<string> with pre-defined id elements:\n";
    auto* cases = new vector<string>();
    cases->emplace_back("Manhattan");
    cout<< (*cases)[0];
    cases->emplace_back("Bronx");
    cout<< (*cases)[0];
    cases->emplace_back("Queens");
    cout<< (*cases)[0];
    cases->emplace_back("Brooklyn");
    cout<< (*cases)[0];
    cases->emplace_back("Staten Island");
    cout << (*cases)[0];
    Map<string> m(cases);
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
