#include "Return.h"
#include "CommandFactory.h"
#include <iostream>

void Return::execute() const {
    cout << "Executing Return Command" << endl;
}

Transaction* Return::create(istream& in) const {
    return new Return();
}

bool registeredReturn = []() {
    CommandFactory::registerCommand('R', new Return());
    return true;
}();