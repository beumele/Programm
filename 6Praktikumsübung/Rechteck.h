#ifndef Rechteck_H
#define Rechteck_H

#include "Color.h"
#include <iostream>

class Rechteck{
    private: 
        float laenge;
        float breite;
        color farbe;
        
    public:
    //Konstruktor
        Rechteck(float l = 1.0, float b = 1.0, color c = UNDEF); // konsturkur
    //Getter
        float get_laenge() const;
        float get_breite() const;
        color get_farbe() const;
    //Setter
        void set_laenge(float l);
        void set_breite(float b);
        void set_farbe(color c);
    //Methoden
        virtual float flaeche()const;
        virtual float umfang()const;
        virtual void print()const;
    // Destrukur
        virtual ~Rechteck() = default; // virutaler Destrukutr
};

#endif