#include <iostream>
#include "Rechteck.h"
#include "Dreieck.h"
#include "Kreis.h"
#include "Quadrat.h"

int main(){
    Rechteck r(3,4,GELB);
    Kreis k(3,BLAU);
    Dreieck d(7,5,4);
    Quadrat q;
    

    r.print();
    k.print();
    d.print();
    q.print();
}

/*
g++ -g main.cpp Rechteck.cpp Kreis.cpp Dreieck.cpp Quadrat.cpp -o main
g++ -g main.cpp Rechteck.cpp Kreis.cpp Dreieck.cpp -o main
./main

*/