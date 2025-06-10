#ifndef COMMANDFACTORY_H
#define COMMANDFACTORY_H

#include <unordered_map>
#include "Transaction.h"

class CommandFactory {
public:
    static Transaction* createCommand(char commandCode, istream& in);
    static void registerCommand(char commandCode, Transaction* prototype);

private:
    static unordered_map<char, Transaction*> commandMap;
};

#endif
