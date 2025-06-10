#ifndef COMEDY_H
#define COMEDY_H

#include "Movie.h"

class Comedy : public Movie {
    int year;

public:
    Comedy(int stock, const string& director, const string& title, int year);
    void display() const override;
    string getSortKey() const override;
    Movie* create(istream& in) const override;
    string getGenre() const override;
};

#endif