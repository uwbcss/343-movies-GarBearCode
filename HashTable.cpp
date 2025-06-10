#include "HashTable.h"

template <typename K, typename V>
HashTable<K, V>::HashTable() : table(SIZE) {}

template <typename K, typename V>
void HashTable<K, V>::insert(const K& key, const V& value) {
    int idx = hash(key);
    table[idx].push_back({key, value});
}

template <typename K, typename V>
bool HashTable<K, V>::get(const K& key, V& value) const {
    int idx = hash(key);
    for (auto& p : table[idx]) {
        if (p.first == key) {
            value = p.second;
            return true;
        }
    }
    return false;
}