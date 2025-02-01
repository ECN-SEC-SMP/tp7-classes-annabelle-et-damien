#pragma once
#include <iostream>
using namespace std;

class Point {
	private:
		int x;
		int y;
	public:
		// Constructeurs
		Point(); // par défaut
        Point(int x, int y);
		Point(Point& p);

		// Accesseurs
		int getX() {return x;}
		int getY() {return y;}
		
		// Mutateurs
		void setX(int x);
		void setY(int y);

		// Méthodes
		void translater(int varX, int varY);
		void translater(Point& p);
		void affiche();

		// Operateurs
		friend ostream& operator<<(ostream& os, const Point &p);
		void operator+=(const Point &p);
};

ostream& operator<<(ostream& os, const Point &p);
