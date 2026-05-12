#include <iostream>
#include "Game.h"

using namespace std;

int main() {

    try {
        Game game;
        game.run();
    }
    catch (...) {
        cout << "An error occurred." << endl;
    }

    return 0;
}
