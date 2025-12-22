#include <iostream>
#include "Quadrat.h"
#include "cmath"

Quadrat::Quadrat(float seite,color c)
    : Rechteck(seite,seite,c){}

float Quadrat::diagonale()const{return (std::sqrt(2)*get_laenge());}

void Quadrat::print()const{
    std::cout
    << " Seitenlaenge: " << get_laenge() 
    << " Farbe: " << get_farbe()
    << " Umfang: " << umfang()
    << " Flaeche: "<< flaeche()
    << " Diagonale: "<< diagonale()
    << std::endl;}