#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <vector>
#include <list>
#include <utility>
using namespace std;

template <typename K, typename V>
class HashTable {
private:
    static const int SIZE = 1000;
    vector<list<pair<K, V>>> table;

    int hash(const K& key) const {
        return key % SIZE;
    }

public:
    HashTable();
    void insert(const K& key, const V& value);
    bool get(const K& key, V& value) const;
};

#endif