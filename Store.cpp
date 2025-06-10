#include "Store.h"
#include <iostream>

Store::~Store() {
    for (auto& p : customers) delete p.second;
    for (auto& p : inventory) delete p.second;
}

void Store::addCustomer(Customer* cust) {
    customers[cust->getId()] = cust;
}

Customer* Store::getCustomer(int id) const {
    auto it = customers.find(id);
    return it != customers.end() ? it->second : nullptr;
}

void Store::addMovie(Movie* movie) {
    inventory[movie->getSortKey()] = movie;
}

void Store::printInventory() const {
    cout << "Store Inventory:\n";
    for (const auto& pair : inventory) {
        pair.second->display();
    }
}

void Store::processTransaction(Transaction* t) {
    t->execute();
    delete t;
}