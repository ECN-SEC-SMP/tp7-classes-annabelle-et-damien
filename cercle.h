#pragma once
#include <iostream>
#include "forme.h"
using namespace std;

class Cercle : public Forme {
    private:
        int rayon;
    
    public:
        // Constructeurs
        Cercle();
        Cercle(int rayon);
        Cercle(int x, int y);
        Cercle(int x, int y, int rayon);
        Cercle(const Point &p);
        Cercle(const Point &p, int rayon);

        // Méthodes abstraites
        double perimetre() override;
        double surface() override;

        // Opérateurs
        friend ostream& operator<<(ostream& os, const Cercle &c);
};