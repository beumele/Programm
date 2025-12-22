#include "Rechteck.h"
#include <iostream>

Rechteck::Rechteck(float l, float b, color c)
    : laenge(l), breite(b), farbe(c){}
//Getter
    float Rechteck::get_laenge() const{return laenge;}
    float Rechteck::get_breite() const{return breite;}
    color Rechteck::get_farbe() const{return farbe;}
//Setter
    void Rechteck::set_laenge(float l){laenge = l;}
    void Rechteck::set_breite(float b){breite = b;}
    void Rechteck::set_farbe(color c){farbe = c;}
//Methoden
    float Rechteck::flaeche()const{return laenge*breite;}
    float Rechteck::umfang()const{return 2*(laenge+breite);}
    void Rechteck::print()const{
        std::cout 
        << " Laenge: "<< laenge
        << " Breite: "<< breite
        << " Farbe: "<< farbe
        << " Flaeche: " << flaeche()
        << " Umfang: " << umfang() << std::endl;
    }








