#ifndef DRAMA_H
#define DRAMA_H

#include "Movie.h"

class Drama : public Movie {
    int year;

public:
    Drama(int stock, const string& director, const string& title, int year);
    void display() const override;
    string getSortKey() const override;
    Movie* create(istream& in) const override;
    string getGenre() const override;
};

#endif