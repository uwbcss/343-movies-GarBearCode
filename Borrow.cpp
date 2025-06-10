#include "Borrow.h"
#include "CommandFactory.h"
#include <iostream>

void Borrow::execute() const {
    cout << "Executing Borrow Command" << endl;
}

Transaction* Borrow::create(istream& in) const {
    return new Borrow(); // Simplified; would usually parse more input
}

bool registeredBorrow = []() {
    CommandFactory::registerCommand('B', new Borrow());
    return true;
}();