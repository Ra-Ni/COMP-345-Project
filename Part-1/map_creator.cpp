#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void create() {
    ofstream out;
    char* s = new char[100];
    out.open("./Resources/out.dat",ios::binary);
    cout << "Enter: ";
    cin >> s;

    out.write(s,sizeof s);
    cout << s;

    ifstream in;
    in.open("./Resources/Board.jpeg");
    cout << in.get();
    cout << in.get();
    cout << in.get();cout << in.get();

    delete s;
    s = nullptr;
    out.close();
}
