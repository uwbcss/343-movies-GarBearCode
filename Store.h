#ifndef STORE_H
#define STORE_H

#include <map>
#include "Customer.h"
#include "Movie.h"
#include "Transaction.h"

class Store {
private:
    map<int, Customer*> customers;
    map<string, Movie*> inventory; // sort key → Movie*

public:
    ~Store();
    void addCustomer(Customer* cust);
    Customer* getCustomer(int id) const;
    void addMovie(Movie* movie);
    void processTransaction(Transaction* t);
    void printInventory() const;
};

#endif