#include "Inventory.h"
#include "CommandFactory.h"
#include <iostream>

void Inventory::execute() const {
    cout << "Executing Inventory Command" << endl;
}

Transaction* Inventory::create(istream& in) const {
    return new Inventory();
}

bool registeredInventory = []() {
    CommandFactory::registerCommand('I', new Inventory());
    return true;
}();