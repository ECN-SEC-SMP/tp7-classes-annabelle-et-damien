#pragma once
#include <iostream>
#include "point.h"

using namespace std;

class Forme {
    private:
        Point centre;

    public:
        // Constructeurs
        Forme();
        Forme(const Point &p);

        // Méthodes abstraites
        // virtual int perimetre() const = 0;
        // virtual int surface() const = 0;

        // Operateurs
        void operator+=(const Point &p);
        friend ostream& operator<<(ostream& os, const Forme &f);
    
};

ostream& operator<<(ostream& os, const Forme &f);