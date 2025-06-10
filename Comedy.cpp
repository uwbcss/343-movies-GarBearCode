#include "Comedy.h"
#include "MovieFactory.h"
#include <sstream>

Comedy::Comedy(int stock, const string& director, const string& title, int year)
    : Movie(stock, director, title), year(year) {}

void Comedy::display() const {
    cout << "F, " << stock << ", " << director << ", " << title << ", " << year << endl;
}

string Comedy::getSortKey() const {
    return title + to_string(year);
}

Movie* Comedy::create(istream& in) const {
    int stock, year;
    string director, title, temp;
    getline(in, temp, ','); stock = stoi(temp);
    getline(in, director, ',');
    getline(in, title, ',');
    in >> year;
    return new Comedy(stock, director, title, year);
}

string Comedy::getGenre() const {
    return "F";
}

bool registeredComedy = []() {
    MovieFactory::registerMovie('F', new Comedy(0, "", "", 0));
    return true;
}();