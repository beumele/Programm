#ifndef Kreis_h
#define Kreis_h

#include "Color.h"

class Kreis{
    private:
        float radius;
        color farbe;
    public:
        Kreis(float r = 1.0, color c = UNDEF); // Konstruktor

    //Getter
        float get_radius()const;
        float get_color() const;
    //Setter
        void set_radius(float r);
        void set_color(color c);
    //Methoden
        float flaeche()const;
        float umfang()const;
        void print()const;
};
#endif
