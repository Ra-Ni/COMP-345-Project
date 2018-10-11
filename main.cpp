#include "./Part-1/graphmap.h"
#include "./Part-2/maploader.h"
#include "./Part-3/ClsDice.h"
#include "Part-5/core.h"
#include <iostream>
#include <string>

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
        cout << "\nLinking object one to object two\n" << endl;
        g.link(1, 0);
        cout << "Adjacency List:" << endl;
        g.print();
        cout << "\nIs this graph connected? " << (g.isGraphConnected() ? "Yes" : "No") << endl;
    }
}

namespace part2 {
    int main() {
        cout << "Creating string path to King Of New York.map" << endl;
        string s = "./Resources/King\ Of\ New\ York.map";
        cout << "Creating maploader object containing file path" << endl;
        maploader m(s);
        cout << "Reading the file" << endl;
        m.read();
        cout << "Adjacency map:" << endl;
        m.print();
        cout << "is map connected? " << (m.isConnected() ? "Yes" : "No") << endl;

        cout << "\n\nCreating new maploader object, with missing node 5 for all except node 6" << endl;
        s = "./Resources/bad.map";
        maploader m2(s);
        cout << "Reading the file" << endl;
        m2.read();
        cout << "Adjacency map:" << endl;
        m2.print();
        cout << "is map connected? " << (m2.isConnected() ? "Yes" : "No") << endl;
    }
}

namespace part3 {
    int main() {

        int _History[6] = {0};
        ClsDice _BlackDice;
        cout << " 1th Roll : Rolling all six Dices ... \n ";
        for (int i = 0; i < 6; i++) {
            _History[i] = _BlackDice.Roll();
        }

        // first rolling is done here
        char _Answer;
        char _ReRoll[6] = {0};
        int _ResultOfNewRoll;
        int _ResultOfReadingS;

        cout << "The results are :";
        for (int i = 0; i < 6; i++) {
            cout << "\n Dice(" << i + 1 << ") Result = " << _BlackDice.GetName(_History[i]);

        }
        cout << endl;
        cout << "\nFirst turn is done !\n*******************************************\n";

        cout << "\n**********Ask For Rerolling 2 times more ( optional) ***********:\n";
        cout << "\n Do you want to reroll ? " << endl;
        cin >> _Answer;
        if (_Answer == 'Y' || _Answer == 'y')  // if user says yes for the second turn, the third turn comes next
        {
            cout << " Which dices do you want to reroll agein ? (enter numbers without space) " << endl;
            cin >> _ReRoll;
            cout << "\n**********2th Roll***********:\n";
            for (int i = 0; i < 6; i++) {
                if (_ReRoll[i] != NULL) {

                    _ResultOfReadingS = int(_ReRoll[i]) - 49;
                    _ResultOfNewRoll = _BlackDice.Roll();
                    _History[int(_ReRoll[i]) - 49] = _ResultOfNewRoll;

                }
            }
            //*******************************************
            cout << "\n The results are :";
            for (int i = 0; i < 6; i++) {
                cout << "\n Dice(" << i + 1 << ") Result = " << _BlackDice.GetName(_History[i]);
            }
            cout << "\n The Second rolling is DONE... \n**************************************\n ";


            cout << "\n*********3th Roll**********:\n";
            cout << "\n Do you want to reroll ? :" << endl;
            cin >> _Answer;
            if (_Answer == 'Y' || _Answer == 'y') {
                cout << " Which dices do you want to reroll agein ? (enter numbers without space) " << endl;
                cin >> _ReRoll;

                for (int i = 0; i < 6; i++) {
                    if (_ReRoll[i] != NULL) {

                        _ResultOfReadingS = int(_ReRoll[i]) - 49;
                        _ResultOfNewRoll = _BlackDice.Roll();
                        _History[int(_ReRoll[i]) - 49] = _ResultOfNewRoll;

                    }
                }
                //*******************************************
                cout << "\n The results are :";
                for (int i = 0; i < 6; i++) {
                    cout << "\n Dice(" << i + 1 << ") Result = " << _BlackDice.GetName(_History[i]);
                }
                cout << endl;
                cout << "\n Third rolling is done... \n--------------------------------\n ";
                cout << "\n Dices were rerolled for three times !\n";


            } else {
                cout << "\n Dices were rerolled for two times !\n";

            }
        } else {
            cout << "\n Dices were rolled for one time!\n";

        }
        cout << "******************Display The Final Result******************" << endl;
        cout << "\n Rolling Dice overed ,Now You Can See The Result :\n ";
        cout << "\n ==============================================\n";

        for (int i = 0; i < 6; i++) {
            cout << "\n Dice(" << i + 1 << ") Result = " << _BlackDice.GetName(_History[i]);
        }
        cout << "\n";
        cout << "\n";
        system("pause");
        return 0;

    }
}

namespace part5 {
    int main() {
        cout << "Creating core object" << endl;
        core c;
        cout << "Resetting contents of core" << endl;
        c.reset();
        cout << "Printing core";
        c.print();
    }
}


int main() {
    part1::main();
    //part2::main();
    //part3::main();
    //part5::main();
}