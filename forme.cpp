#include "forme.h"
#include "point.h"

// Constructeurs
Forme::Forme() {
    this->centre = Point();
}

Forme::Forme(int x, int y) {
    this->centre = Point(x, y);
}

Forme::Forme(const Point &p) {
    this->centre = p;
}

// Méthodes


// Opérateurs
void Forme::operator+=(const Forme &f) {
    this->centre += f.centre;
}

ostream& operator<<(ostream& os, const Forme &f) {
    os << f.centre;
    return os;
}