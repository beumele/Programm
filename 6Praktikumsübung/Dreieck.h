#ifndef Dreieck_H
#define Dreieck_H

#include "Color.h"

class Dreieck{
    private:
    //Atribute
        float a;
        float b;
        float c;
        color farbe;
    public:
    //Konstruktor
        Dreieck(float a = 1.0,float b = 1.0 ,float c = 1.0, color cF = UNDEF);
    //Getter
        float get_a()const;
        float get_b()const;
        float get_c()const;
        color get_color()const;
    //Setter
        void set_a(float na);
        void set_b(float nb);
        void set_c(float nc);
        void set_color(color cF);
    //Methoden  
        float flaeche()const;
        float umfang()const;
        void print()const;
};



#endif