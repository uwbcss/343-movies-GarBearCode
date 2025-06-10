#include "Drama.h"
#include "MovieFactory.h"
#include <sstream>

Drama::Drama(int stock, const string& director, const string& title, int year)
    : Movie(stock, director, title), year(year) {}

void Drama::display() const {
    cout << "D, " << stock << ", " << director << ", " << title << ", " << year << endl;
}

string Drama::getSortKey() const {
    return director + title;
}

Movie* Drama::create(istream& in) const {
    int stock, year;
    string director, title, temp;
    getline(in, temp, ','); stock = stoi(temp);
    getline(in, director, ',');
    getline(in, title, ',');
    in >> year;
    return new Drama(stock, director, title, year);
}

string Drama::getGenre() const {
    return "D";
}

bool registeredDrama = []() {
    MovieFactory::registerMovie('D', new Drama(0, "", "", 0));
    return true;
}();