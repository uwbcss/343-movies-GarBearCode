#include "Customer.h"
#include <iostream>

Customer::Customer(int id, const string& firstName, const string& lastName)
    : id(id), firstName(firstName), lastName(lastName) {}

int Customer::getId() const {
    return id;
}

string Customer::getName() const {
    return firstName + " " + lastName;
}

void Customer::addHistory(const string& entry) {
    history.push_back(entry);
}

void Customer::printHistory() const {
    cout << "History for Customer " << id << " - " << getName() << ":\n";
    for (const string& entry : history) {
        cout << "  " << entry << endl;
    }
}
