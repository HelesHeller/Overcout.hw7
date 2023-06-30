#ifndef OVERCOAT_H
#define OVERCOAT_H

#include <string>

using namespace std;

class Overcoat {
private:
    string type;
    double price;

public:
    Overcoat(const string& coatType, double coatPrice);

    bool operator==(const Overcoat& other) const;
    Overcoat& operator=(const Overcoat& other);
    bool operator>(const Overcoat& other) const;

    string getType() const;
    double getPrice() const;
};

#endif
