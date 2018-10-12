#include "dicefacility.h"
#include <iostream>

using namespace std;

namespace part3 {
    int main() {
        dicefacility d;
        cout << "First roll:";
        cout << d.to_string() << endl;
        cout << "\nAttempting to request more than 6 dicefacility to roll\nWill try to roll combinations 0143249177.";
        string s = "0143249177";
        d.roll(s);
        cout << d.to_string() << endl;
        cout << "\nIt only rolled 0-4, with no repetitions since there are two 4s." << endl;
        cout << "\nThe container returned the right values.\n" << endl;
        cout << "Rolling two more times" << endl;
        d.rollAll();
        d.rollAll();
        cout << "Does not allow more than three rolls.\n" << endl;
        cout << "History of past rolls:" << endl;
        cout << d.history() << endl;
        cout << "Creating another object" << endl;
        dicefacility d2;
        d2.rollAll();
        d2.rollAll();
        cout << d2.history() << endl;
        cout << "Histories are different, seed provides good uniformity." << endl;
        return 0;
    }
}
