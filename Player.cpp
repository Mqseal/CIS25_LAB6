#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
    : name("Hero"), health(100), maxHealth(100), attackPower(10), inventory(5) {
    cout << "Default constructor called for Player." << endl;
}

Player::Player(string name, int health, int attackPower)
    : name(name), health(health), maxHealth(health), attackPower(attackPower), inventory(10) {
    cout << "Overloaded constructor called." << endl;
}

Player::~Player() {
    cout << "Player " << name << " has been destroyed." << endl;
}

void Player::takeDamage(int damage) {
    health -= damage;

    if (health < 0) {
        health = 0;
    }

    if (health == 0) {
        cout << name << " falls to the ground, defeated." << endl;
    }
}

string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

int Player::getMaxHealth() const {
    return maxHealth;
}

int Player::getAttackPower() const {
    return attackPower;
}

void Player::displayStatus() const {
    cout << "[" << name << "] - HP: " << health << "/" << maxHealth << endl;
}

void Player::showInventory() const {
    inventory.display();
}

void Player::addItem(const Item& item) {
    if (inventory.addItem(item)) {
        cout << name << " found a [" << item.getName() << "] (Value: " << item.getValue() << ")" << endl;
    }
    else {
        cout << "Inventory is full." << endl;
    }
}
