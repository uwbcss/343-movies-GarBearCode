#include "Classic.h"
#include "MovieFactory.h"
#include <sstream>

Classic::Classic(int stock, const string& director, const string& title, int month, int year, const string& actor)
    : Movie(stock, director, title), month(month), year(year), majorActor(actor) {}

void Classic::display() const {
    cout << "C, " << stock << ", " << director << ", " << title << ", " << majorActor << " " << month << " " << year << endl;
}

string Classic::getSortKey() const {
    return to_string(year) + to_string(month) + majorActor;
}

Movie* Classic::create(istream& in) const {
    int stock, month, year;
    string director, title, fName, lName, temp;
    getline(in, temp, ','); stock = stoi(temp);
    getline(in, director, ',');
    getline(in, title, ',');
    in >> fName >> lName >> month >> year;
    return new Classic(stock, director, title, month, year, fName + " " + lName);
}

string Classic::getGenre() const {
    return "C";
}

bool registeredClassic = []() {
    MovieFactory::registerMovie('C', new Classic(0, "", "", 0, 0, ""));
    return true;
}();