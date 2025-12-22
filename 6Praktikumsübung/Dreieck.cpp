#include <iostream>
#include "Dreieck.h"
#include "cmath"

Dreieck::Dreieck(float a_, float b_, float c_, color cF)
    : a(a_), b(b_), c(c_), farbe(cF) {}
//Getter
float Dreieck::get_a()const{return a;}
float Dreieck::get_b()const{return b;}
float Dreieck::get_c()const{return c;}
color Dreieck::get_color()const{return farbe;}
//Setter
void Dreieck::set_a(float na){a = na;}
void Dreieck::set_b(float nb){b = nb;}
void Dreieck::set_c(float nc){c = nc;}
void Dreieck::set_color(color nF){farbe = nF;}
//Methoden
float Dreieck::umfang()const{return a+b+c;}
float Dreieck::flaeche()const{
    float s = umfang()/2;
    return std::sqrt(s*(s-a)*(s-b)*(s-c));}

void Dreieck::print()const{
    std::cout 
    << " A: " << a
    << " B:" << b
    << " C: "<< c
    << " Farbe: " <<farbe
    << " Flaeche: " << flaeche()
    << " Umfang: " << umfang()
    << std::endl;}
    

