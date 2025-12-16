#include <stdio.h>
#include <stdlib.h>

int main(int zahlen, char* mzahlen[]) {
    // Prüfen, ob mindestens 2 Zahlen übergeben wurden
    if (zahlen < 3) {
        fprintf(stderr, "Bitte mindestens 2 ganze Zahlen als Parameter eingeben.\n"); //Nachricht an den Fehlerausgabestrom
        return 1;
    }

    int summe = 0;

    // Alle übergebenen Zahlen summieren
    for (int i = 1; i < zahlen; i++) {
        summe += atoi(mzahlen[i]); //Sie wandelt einen String (Text) in eine ganze Zahl (int) um.
    }

    printf("Die Summe der Zahlen ist: %d\n", summe);

    return 0;
}

/*
gcc Aufgabe3.c -o Aufgabe3
./Aufgabe3 5 7 3 10
./Aufgabe3 5 7 > output.txt
*/