#include <stdio.h>
#include <stdbool.h>
#define MAXV 30
#define MAXN 30
#define MAXL 50

typedef struct student {
    unsigned int matrikelnummer;
    unsigned char fachsemester;
    char vorname[MAXV];
    char nachname[MAXN];
} student;

void init(student sl[MAXN]) {
    for (int i = 0; i < MAXN; i++) {
        sl[i].matrikelnummer = 0;
        sl[i].fachsemester = 0;
        strcpy(sl[i].vorname, "n.n.");
        strcpy(sl[i].nachname, "n.n.");
    }
}

void print (student sl[MAXL]){
    for (int i = 0; i < MAXN; i++){
        printf("Name: %s, %s\n", sl[i].nachname, sl[i].vorname);
        printf("Matrikelnummer: %u\n", sl[i].matrikelnummer);
        printf("Fachsemester: %u\n\n", sl[i].fachsemester);
    }
}

void eingeben(student sl[MAXL]){
     for (int i  = 0; i < MAXN; i++) {
        if (sl[i].matrikelnummer == 0) {  // Platz ist frei
            printf("Geben Sie die Matrikelnummer ein: ");
            scanf("%u", &sl[i].matrikelnummer);

            printf("Geben Sie das Fachsemester ein: ");
            scanf("%hhu", &sl[i].fachsemester); // %hhu für unsigned char

            printf("Geben Sie den Vornamen ein: ");
            scanf("%s", sl[i].vorname);  // Strings ohne & eingeben

            printf("Geben Sie den Nachnamen ein: ");
            scanf("%s", sl[i].nachname);

            printf("Student erfolgreich eingetragen!\n");
            break;  // Schleife verlassen, da Eintrag erfolgt
        }
    if (i == MAXN) {
        printf("Die Liste ist voll! Kein freier Platz vorhanden.\n");
        }
    }
}