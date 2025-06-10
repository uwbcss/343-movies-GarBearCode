#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Transaction; // Forward declaration

class Customer {
private:
    int id;
    string firstName;
    string lastName;
    vector<string> history;

public:
    Customer(int id, const string& firstName, const string& lastName);
    int getId() const;
    string getName() const;
    void addHistory(const string& entry);
    void printHistory() const;
};

#endif