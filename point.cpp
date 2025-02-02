#include <iostream>
#include "point.h"

/* ---------- Constructeurs ---------- */
Point::Point() {
	this->x = 0;
	this->y = 0;
}

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

Point::Point(Point& p) {
	this->x = p.x;
	this->y = p.y;
}


/* ---------- Mutateurs ---------- */
void Point::setX(int x) {
	this->x = x;
}

void Point::setY(int y) {
	this->y = y;
}

/* ---------- Méthodes ---------- */
void Point::translater(int varX, int varY) {
    this->x += varX;
    this->y += varY;
}

void Point::translater(Point& p) {
	this->x = p.x;
	this->y = p.y;
}

void Point::affiche() {
    cout << "Coordonnées : (" << this->x << "," << this->y << ")" << endl;
}


/* ---------- Opérateurs ---------- */
ostream& operator<<(ostream& os, const Point &p) {
    os << "(" << p.x << "," << p.y << ")";
    return os;
}

void Point::operator+=(const Point &p) {
    this->x += p.x;
    this->y += p.y;
}