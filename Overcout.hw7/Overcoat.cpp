#include "overcoat.h"

Overcoat::Overcoat(const string& coatType, double coatPrice)
    : type(coatType), price(coatPrice) {}

bool Overcoat::operator==(const Overcoat& other) const {
    return type == other.type;
}

Overcoat& Overcoat::operator=(const Overcoat& other) {
    if (this != &other) {
        type = other.type;
        price = other.price;
    }
    return *this;
}

bool Overcoat::operator>(const Overcoat& other) const {
    return price > other.price;
}

string Overcoat::getType() const {
    return type;
}

double Overcoat::getPrice() const {
    return price;
}
