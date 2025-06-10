#ifndef MOVIEFACTORY_H
#define MOVIEFACTORY_H

#include <unordered_map>
#include <string>
#include "Movie.h"
using namespace std;

class MovieFactory {
public:
    static Movie* createMovie(char genreCode, istream& in);
    static void registerMovie(char genreCode, Movie* prototype);

private:
    static unordered_map<char, Movie*> movieMap;
};

#endif