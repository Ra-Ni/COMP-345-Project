#include "./Part-1/graphmap.h"
#include "./Part-2/maploader.h"
#include "./Part-3/dice.h"
#include "./Part-4/player.h"
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
        cout << "\nLinking object two to object one\n" << endl;
        g.link(1, 0);
        cout << "Adjacency List:" << endl;
        g.print();
        cout << "\nIs this graph connected? " << (g.isGraphConnected() ? "Yes" : "No") << endl;
        return 0;
    }
}

namespace part2 {
    int main() {
        cout << "Creating string path to King Of New York.map" << endl;
        string s = "../Resources/King Of New York.map";
        cout << "Creating maploader object containing file path" << endl;
        maploader m(s);
        cout << "Reading the file" << endl;
        m.read();
        cout << "Adjacency map:" << endl;
        m.print();
        cout << "is map connected? " << (m.isConnected() ? "Yes" : "No") << endl;
        cout << "\n\nCreating new maploader object, with missing node 5 for all except node 6" << endl;
        s = "../Resources/bad.map";
        maploader m2(s);
        cout << "Reading the file" << endl;
        m2.read();
        cout << "Adjacency map:" << endl;
        m2.print();
        cout << "is map connected? " << (m2.isConnected() ? "Yes" : "No") << endl;
        return 0;
    }
}

namespace part3 {
    int main() {
        dicefacility d;
        cout << "First roll:";
        d.print();
        cout << "\nAttempting to request more than 6 dice to roll\nWill try to roll combinations 0143249177.";
        string s = "0143249177";
        d.roll(s);
        d.print();
        cout << "\nIt only rolled 0-4, with no repetitions since there are two 4s." << endl;
        cout << "\nThe container returned the right values.\n" << endl;
        cout << "Rolling two more times" << endl;
        d.rollAll();
        d.rollAll();
        cout << "Does not allow more than three rolls.\n" << endl;
        cout << "History of past rolls:" << endl;
        d.history();
        cout << "Creating another object" << endl;
        dicefacility d2;
        d2.rollAll();
        d2.rollAll();
        d2.history();
        cout << "Histories are different, seed provides good uniformity." << endl;
        return 0;
    }
}
/*
namespace part4 {
 int main() {
cout<< "Please enter the number of players:<< endl;
char numOfPlayers;
cin>> numOfPlayers;
char _monsterId, _graphmapId , _tokenId;

for (int i=0; i<=numOfPlayers; i++){
        cout << "Creating a player object" << endl;
cout << " Please select a monster id for the player" << i <<": (should be a number between 1 and 6, 1= SHERRIF, 2= DRAKONIS, 3= CAPTAIN FISH, 4= MANTIS, 5= ROB, 6= KONG)" << endl;
                cin >> _monsterId;       
cout << " Please select a region for the player" << i <<": (should be a number between 1 and ?, 1=" << endl;
		cin>> _tokenID 
cout << " Please select a token for the player" << i <<": (should be a number between 1 and 4, 1=Web, 2=Jynx, 3=Souvenir, 4=Carpace)" << endl;
		cin>> _tokenID 
Player p[i]= Player(_monsterId, _graphId, _tokenId);
    }
}
*/
/*
namespace part5 {
    int main() {
            interface f;
            f.print();
            card d = f.drawCard();
            cout << d._description;
            //d._description = 9;
            //cout << d._description;
            return 0;
    }
}*/


int main() {
    //part1::main();
    //part2::main();
    //part3::main();
    //part4::main();
    player p;



}

