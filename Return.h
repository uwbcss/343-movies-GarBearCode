#ifndef RETURN_H
#define RETURN_H

#include "Transaction.h"

class Return : public Transaction {
public:
    Return() {}
    void execute() const override;
    Transaction* create(istream& in) const override;
};

#endif