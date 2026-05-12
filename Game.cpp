#include "Game.h"
#include <iostream>
#include <cctype>

using namespace std;

Game::Game()
    : player("Hero", 100, 10),
      gameMap(30, 15, &player),
      running(true) {

    player.addItem(Item("Sword", 10));
    player.addItem(Item("Shield", 5));

    cout << "Welcome to the Console RPG!" << endl;
}

Game::~Game() {
    cout << "Game closed." << endl;
}

void Game::run() {

    while (running) {

        for (int i = 0; i < 20; i++) {
            cout << endl;
        }

        cout << "===== Console RPG =====" << endl;
        cout << endl;

        gameMap.draw();

        cout << endl;
        cout << "Player: " << player.getName() << endl;
        cout << "Health: " << player.getHealth() << endl;
        cout << "Position: (" << player.getX() << ", " << player.getY() << ")" << endl;
        cout << endl;
        cout << "Move with WASD or press Q to quit: ";

        processInput();
    }
}

void Game::processInput() {

    char choice;
    cin >> choice;

    choice = toupper(choice);

    int newX = player.getX();
    int newY = player.getY();

    if (choice == 'W') {
        newY--;
    }
    else if (choice == 'S') {
        newY++;
    }
    else if (choice == 'A') {
        newX--;
    }
    else if (choice == 'D') {
        newX++;
    }
    else if (choice == 'Q') {
        running = false;
        return;
    }

    if (!gameMap.isWall(newX, newY)) {
        player.setX(newX);
        player.setY(newY);
    }
}
