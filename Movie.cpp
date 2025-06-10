#include "Movie.h"

Movie::Movie(int stock, const string& director, const string& title)
    : stock(stock), director(director), title(title) {}

int Movie::getStock() const {
    return stock;
}

void Movie::adjustStock(int change) {
    stock += change;
}

string Movie::getTitle() const {
    return title;
}
