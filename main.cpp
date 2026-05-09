#include <iostream>
#include "Player.h"
#include "Item.h"

using namespace std;

int main() {
    Player hero;

    Item sword("Sword", 10);
    Item shield("Shield", 15);
    Item potion("Potion", 5);
    Item helmet("Helmet", 20);
    Item boots("Boots", 8);
    Item extra("Extra Item", 30);

    cout << endl;
    cout << "--- Adding items to hero's inventory ---" << endl;

    hero.addItem(sword);
    hero.addItem(shield);
    hero.addItem(potion);
    hero.addItem(helmet);
    hero.addItem(boots);
    hero.addItem(extra);

    cout << endl;
    cout << "--- Hero's Inventory ---" << endl;
    hero.showInventory();

    cout << endl;
    cout << "Total items added to inventories: " << Item::getTotalItems() << endl;

    return 0;
}
