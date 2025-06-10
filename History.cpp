#include "History.h"
#include "CommandFactory.h"
#include <iostream>

void History::execute() const {
    cout << "Executing History Command" << endl;
}

Transaction* History::create(istream& in) const {
    return new History();
}

bool registeredHistory = []() {
    CommandFactory::registerCommand('H', new History());
    return true;
}();