#pragma once
#include <iostream>
#include "point.h"

using namespace std;

class Forme {
    protected:
        Point centre;

    public:
        // Constructeurs
        Forme();
        Forme(int x, int y);
        Forme(const Point &p);

        // Méthodes abstraites
        virtual double perimetre() = 0;
        virtual double surface() = 0;

        // Operateurs
        void operator+=(const Forme &f);
        friend ostream& operator<<(ostream& os, const Forme &f);
    
};

ostream& operator<<(ostream& os, const Forme &f);