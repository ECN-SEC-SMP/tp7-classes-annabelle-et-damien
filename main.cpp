#include <iostream>
#include "point.h"
#include "forme.h"
#include "cercle.h"

using namespace std;


int main() {
    /* PARTIES 1 & 2
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
    cout << p1.getX() << "," << p1.getY() << endl;

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
    */

    /* PARTIE 3 
    Forme f0;
    cout << "f0 : " << f0 << endl;

    Forme f1(24,6);
    cout << "f1 : " << f1 << endl;

    Point p(10,3);
    Forme f2(p);
    cout << "f2 : " << f2 << endl;
    
    f2 += f1;
    cout << "f2 += f1 : " << f2 << endl;
    */

    /* PARTIE 4 */
    Cercle c0;
    cout << "c0 : " << c0 << endl;

    Cercle c1(5);
    cout << "c1 : " << c1 << endl;

    Cercle c2(24,6);
    cout << "c2 : " << c2 << endl;

    Cercle c3(7,2,14);
    cout << "c3 : " << c3 << endl;

    Point p4(10,3);
    Cercle c4(p4);
    cout << "c4 : " << c4 << endl;

    Point p5(5,8);
    Cercle c5(p5,4);
    cout << "c5 : " << c5 << endl;

    cout << "perimetre de c5 : " << c5.perimetre() << endl;
    cout << "surface de c5 : " << c5.surface() << endl;
}