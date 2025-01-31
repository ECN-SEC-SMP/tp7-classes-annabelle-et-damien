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
    Point p2(p1);
    p2.affiche();

    cout << endl;
    
    // Test de la fonction translater()
    cout << "p3 : translation vers le point p2" << endl;
    Point p3;
    p3.affiche();
    p3.translater(p2);
    p3.affiche();

    cout << endl;

    // Test de la surcharge de l'opérateur <<
    cout << "p3 : " << p3 << endl;

    // Test de la surcharge de l'opérateur +=
    p3 += p2;
    cout << "p3 += p2 : " << p3 << endl; 
}