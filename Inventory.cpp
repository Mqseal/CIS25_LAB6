#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory(int capacity)
    : items(new Item[capacity]), capacity(capacity), itemCount(0) {
}

Inventory::~Inventory() {
    delete[] items;
    cout << "Inventory has been destroyed." << endl;
}

bool Inventory::addItem(const Item& item) {
    if (itemCount >= capacity) {
        return false;
    }

    items[itemCount] = item;
    itemCount++;

    Item::incrementTotalItems();

    cout << "An item was added: " << item.getName() << endl;

    return true;
}

void Inventory::display() const {
    cout << "Inventory (" << itemCount << "/" << capacity << "):" << endl;

    for (int i = 0; i < itemCount; i++) {
        cout << "  ";
        items[i].display();
    }
}
