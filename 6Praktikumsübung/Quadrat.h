#ifndef Quadrat_H
#define Quadrat_H
#include "Rechteck.h"
#include "cmath"

class Quadrat : public Rechteck{
    public:
    //Konstruktor
    Quadrat(float seite = 1.0, color c = UNDEF);
    //Methode
    float diagonale()const;

    void print()const override;
};
#endif