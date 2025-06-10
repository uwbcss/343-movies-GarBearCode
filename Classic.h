#ifndef CLASSIC_H
#define CLASSIC_H

#include "Movie.h"

class Classic : public Movie {
    int month;
    int year;
    string majorActor;

public:
    Classic(int stock, const string& director, const string& title, int month, int year, const string& actor);
    void display() const override;
    string getSortKey() const override;
    Movie* create(istream& in) const override;
    string getGenre() const override;
};

#endif