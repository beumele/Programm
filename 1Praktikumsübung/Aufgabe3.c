#include <stdio.h>

#define PI 3.14159265359

int main() {
   
    float durchmesser = 0.7;   // m
    float drehzahl1 = 10.0;    // u/s
    float drehzahl2 = 8.0;     // U/s
    float geschwindigkeit;     // m/s

    float mittlere_drehzahl = (drehzahl1 + drehzahl2) / 2.0;
    float umfang = PI * durchmesser;
    geschwindigkeit = umfang * mittlere_drehzahl;
    printf("Geschwindigkeit: %.2f m/s\n", geschwindigkeit);
    
    return 0;
}
