#ifndef HISTORY_H
#define HISTORY_H

#include "Transaction.h"

class History : public Transaction {
public:
    History() {}
    void execute() const override;
    Transaction* create(istream& in) const override;
};

#endif