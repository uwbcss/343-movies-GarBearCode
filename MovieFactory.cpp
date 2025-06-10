#include "MovieFactory.h"
#include "Comedy.h"
#include "Drama.h"
#include "Classic.h"

unordered_map<char, Movie*> MovieFactory::movieMap;

Movie* MovieFactory::createMovie(char genreCode, istream& in) {
    if (movieMap.count(genreCode)) {
        return movieMap[genreCode]->create(in);
    }
    return nullptr;
}

void MovieFactory::registerMovie(char genreCode, Movie* prototype) {
    movieMap[genreCode] = prototype;
}
