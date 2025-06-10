#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>
using namespace std;

class Movie {
protected:
    int stock;
    string director;
    string title;

public:
    Movie(int stock, const string& director, const string& title);
    virtual ~Movie() {}
    virtual void display() const = 0;
    virtual string getSortKey() const = 0;
    virtual Movie* create(istream& in) const = 0;
    virtual string getGenre() const = 0;
    int getStock() const;
    void adjustStock(int change);
    string getTitle() const;
};

#endif