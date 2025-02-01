#include "forme.h"
#include "point.h"

// Constructeurs
Forme::Forme() {
    this->centre = Point();
}

Forme::Forme(const Point &p) {
    this->centre = p;
}

// Méthodes


// Opérateurs
void Forme::operator+=(const Point &p) {
    this->centre += p;
}

ostream& operator<<(ostream& os, const Forme &f) {
    os << f.centre;
    return os;
}