#include <iostream>
#include "Kreis.h"
#include "cmath"

Kreis::Kreis(float r, color c) :radius(r),farbe(c) {}
//Getter
float Kreis::get_radius()const{return radius;}
float Kreis::get_color()const{return farbe;}
//Setter
void Kreis::set_radius(float r){radius = r;}
void Kreis::set_color(color c){farbe = c;}
//Methoden
float Kreis::flaeche()const{return M_PI*(radius*radius);}
float Kreis::umfang()const{return 2*M_PI*radius;}

void Kreis::print()const{
    std::cout 
    << " Radius" << radius
    << " Color: " << farbe
    << " Flaeche: " << flaeche()
    << " Umfang: " << umfang()
    << std::endl;
}