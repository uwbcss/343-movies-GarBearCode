#ifndef BORROW_H
#define BORROW_H

#include "Transaction.h"

class Borrow : public Transaction {
public:
    Borrow() {}
    void execute() const override;
    Transaction* create(istream& in) const override;
};

#endif