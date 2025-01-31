# Compte-rendu du TP

## 1. Création d'une classe Point
### Diagramme de la classe `Point`

*DIAGRAMME A FAIRE*

Fichier `point.h` :
```c
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
		Point(Point* p);

		// Accesseurs
		int getX() {return x;}
		int getY() {return y;}
		
		// Mutateurs
		void setX(int x);
		void setY(int y);

		// Méthodes
		void translater(int varX, int varY);
		void translater(Point* p);
		void affiche();

};

// Constructeurs
Point::Point() {
	this->x = 0;
	this->y = 0;
}

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

Point::Point(Point* p) {
	this->x = p->x;
	this->y = p->y;
}


// Mutateurs
void Point::setX(int x) {
	this->x = x;
}

void Point::setY(int y) {
	this->y = y;
}

// Méthodes
void Point::translater(int varX, int varY) {
    this->x += varX;
    this->y += varY;
}

void Point::translater(Point* p) {
	this->x = p->x;
	this->y = p->y;
}

void Point::affiche() {
    cout << "Coordonnées : (" << this->x << "," << this->y << ")" << endl;
} 
```

### Jeu d'essais
Fichier `main.cpp` qui permet de tester les méthodes de la classe :
```c
#include "point.h"
using namespace std;

int main() {
    // Test du constructeur sans parametres
    cout << "p0 : constructeur par défaut" << endl;
    Point p0;
    p0.affiche();
    p0.setX(10);
    p0.setY(7);
    p0.affiche();

    cout << endl;
    
    // Test du constructeur avec deux parametres reels
    cout << "p1 : constructeur avec paramètres" << endl;
    Point p1(8, 6);
    p1.affiche();
    cout << "test de translater(-2,3)" << endl;
    p1.translater(-2, 3);
    p1.affiche();
    cout << "test des accesseurs : ";
    cout << "(" << p1.getX() << "," << p1.getY() << ")" << endl;

    cout << endl;
    
    // Test du constructeur de recopie
    cout << "p2 : constructeur de recopie" << endl;
    Point p2(&p1);
    p2.affiche();

    cout << endl;
    
    // Test de la fonction translater()
    cout << "p3 : translation vers le point p2" << endl;
    Point p3;
    p3.affiche();
    p3.translater(&p2);
    p3.affiche();
}
```

Résultat dans le terminal :
<br>
<img src="image.png" alt="drawing" width="200" />
```text
p0 : constructeur par défaut
Coordonnées : (0,0)
Coordonnées : (10,7)

p1 : constructeur avec paramètres
Coordonnées : (8,6)
test de translater(-2,3)
Coordonnées : (6,9)
test des accesseurs : (6,9)

p2 : constructeur de recopie
Coordonnées : (6,9)

p3 : translation vers le point p2
Coordonnées : (0,0)
Coordonnées : (6,9)
```






[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=17879395)
