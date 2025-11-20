#include <stdio.h>

// rekurisve Funktion: ruft sich selbt immer wieder auf bis abbruch bedingung
// Bedingten Ausdruck: ohne If-else sondern  wahr-falsch
// Bedingte Anweisung: If-else strucktur

#define bool int
#define true 1
#define false 0

// Variante 1: Fakultät mit bedingtem Ausdruck
int fak_1(int x) {
    return (x == 0) ? 1 : x * fak_1(x - 1); // Bedingung ? Wert_wenn_wahr : Wert_wenn_falsch
}

// Variante 2: Fakultät mit bedingter Anweisung
signed long fak_2(signed long long x) {
    if (x == 0) {          
        return 1l;
    } else {                
        return x * fak_2(x - 1l);
    }
}



int main() {
    int n;

    printf("Gib eine positive ganze Zahl ein: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Bitte eine positive Zahl eingeben!\n");
        return 1;
    }

    //printf("Fakultaeten von %d:\n", n);
    //for (int z = 1; z <= n; z++) {
    //    printf("%d! = %d\n", z, fak_1(z));
    //}

    printf("\nFakultaeten %d:\n", n);
    for (int z = 1; z <= n; z++) {
        printf("%d! = %lld\n", z,(long long) fak_2(z));
    }

    return 0;
}