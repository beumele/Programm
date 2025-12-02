#include <stdio.h>
#include <stdbool.h>

#define MAX 100

// Funktion prüft, ob x im Array f vorkommt
bool is_in(int x, int f[MAX], int *index) {

    for (int i = 0; i < MAX; i++) {
        if (f[i] == x) {        // Vergleich, kein =
            *index = i;         // Position über Zeiger zurückgeben
            return true;        // gefunden
        }
    }

    return false;               // nicht gefunden
}

int main(void) {

    int feld[MAX];
    int n;

    printf("Wie viele Zahlen willst du eingeben (max 100)? ");
    scanf("%d", &n);

    // Zahlen einlesen
    printf("Gib die Zahlen ein:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &feld[i]);
    }

    int gesucht;
    printf("Welche Zahl soll gesucht werden? ");
    scanf("%d", &gesucht);

    int index;     // Hier wird der gefundene Index gespeichert

    // Aufruf der Funktion
    if (is_in(gesucht, feld, &index)) {
        printf("Gefunden! Erste Position: %d\n", index+1);
    } else {
        printf("Nicht gefunden.\n");
    }

    return 0;
}
