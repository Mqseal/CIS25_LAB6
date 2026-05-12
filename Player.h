#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Inventory.h"

class Player {
private:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;
    int x;
    int y;
    Inventory inventory;

public:
    Player();
    Player(std::string name, int health, int attackPower);
    ~Player();

    void takeDamage(int damage);

    std::string getName() const;
    int getHealth() const;
    int getMaxHealth() const;
    int getAttackPower() const;
    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);

    void displayStatus() const;
    void showInventory() const;
    void addItem(const Item& item);
};

#endif