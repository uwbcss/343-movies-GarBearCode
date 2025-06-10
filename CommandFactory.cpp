#include "CommandFactory.h"
#include <iostream>

unordered_map<char, Transaction*> CommandFactory::commandMap;

Transaction* CommandFactory::createCommand(char commandCode, istream& in) {
    if (commandMap.count(commandCode)) {
        return commandMap[commandCode]->create(in);
    }
    cerr << "[ERROR] Invalid command code: '" << commandCode << "'" << endl;
    string junk;
    getline(in, junk);
    return nullptr;
}

void CommandFactory::registerCommand(char commandCode, Transaction* prototype) {
    commandMap[commandCode] = prototype;
}
