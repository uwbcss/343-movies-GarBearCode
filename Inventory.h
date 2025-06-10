#ifndef INVENTORY_H
#define INVENTORY_H

#include "Transaction.h"

class Inventory : public Transaction {
public:
    Inventory() {}
    void execute() const override;
    Transaction* create(istream& in) const override;
};

#endif