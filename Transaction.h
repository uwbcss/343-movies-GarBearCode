#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <iostream>
using namespace std;

class Transaction {
public:
    virtual ~Transaction() {}
    virtual void execute() const = 0;
    virtual Transaction* create(istream& in) const = 0;
};

#endif