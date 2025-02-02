#include "cercle.h"
#include "point.h"

#include <cmath>

#define pi 3.14159265358979323846

/* ---------- Constructeurs ---------- */
Cercle::Cercle() : Forme() {
    this->rayon = 1;
}

Cercle::Cercle(int rayon) : Forme() {
    this->rayon = rayon;
}

Cercle::Cercle(int x, int y) : Forme(x,y) {
    this->rayon = 1;
}

Cercle::Cercle(int x, int y, int rayon) : Forme(x,y) {
    this->rayon = rayon;
}

Cercle::Cercle(const Point &p) : Forme(p) {
    this->rayon = 1;
}

Cercle::Cercle(const Point &p, int rayon) : Forme(p) {
    this->rayon = rayon;
}


/* ---------- Méthodes abstraites ---------- */
double Cercle::perimetre() {
    return 2 * pi * this->rayon;
}

double Cercle::surface() {
    return pi * pow(this->rayon, 2);
}


/* ---------- Opérateurs ---------- */
ostream& operator<<(ostream& os, const Cercle &c) {
    os << "cercle de centre " << c.centre << " et de rayon " << c.rayon;
    return os;
}