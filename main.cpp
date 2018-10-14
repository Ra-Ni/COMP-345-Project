#include <iostream>
using namespace std;

namespace part1 {
    int main();
}

namespace part2 {
    int main();
}

namespace part3 {
    int main();
}

namespace part4 {
    int main();
}

namespace part5 {
    int main();
}

int main() {
    int i;
    while(true) {
        cout << "===========\nMAIN MENU\n===========\n1.\tPart 1\n2.\tPart 2\n3.\tPart 3\n4.\tPart 4\n5.\tPart 5" << endl;
        cout << "Which part to test for? (Enter #, if invalid exit): ";
        cin >> i;
        cout << "================ BEGIN ================\n";
        switch(i) {
            case 1: part1::main(); break;
            case 2: part2::main(); break;
            case 3: part3::main(); break;
            case 4: part4::main(); break;
            case 5: part5::main(); break;
            default:
                return 0;
        }
        cout << "================= END =================\n";
    }
}

