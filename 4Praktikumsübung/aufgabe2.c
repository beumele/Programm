#include <stdio.h>
#include <stdbool.h>
#include <string.h>   
#define MAXV 30
#define MAXN 30
#define MAXL 2

typedef struct student {
    unsigned int matrikelnummer;
    unsigned char fachsemester;
    char vorname[MAXV];
    char nachname[MAXN];
} student;

void init(student sl[MAXL]) {
    for (int i = 0; i < MAXL; i++) {   
        sl[i].matrikelnummer = 0;
        sl[i].fachsemester = 0;
        strcpy(sl[i].vorname, "n.n.");
        strcpy(sl[i].nachname, "n.n.");
    }
}

void print(student sl[MAXL]) {
    for (int i = 0; i < MAXL; i++) {   // ebenso MAXL
        printf("Name: %s, %s\n", sl[i].nachname, sl[i].vorname);
        printf("Matrikelnummer: %u\n", sl[i].matrikelnummer);
        printf("Fachsemester: %u\n\n", sl[i].fachsemester);
    }
}

void eingeben(student sl[MAXL]) {
    for (int i = 0; i < MAXL; i++) {   
        if (sl[i].matrikelnummer == 0) {

            printf("Geben Sie die Matrikelnummer ein: ");
            scanf("%u", &sl[i].matrikelnummer);

            printf("Geben Sie das Fachsemester ein: ");
            scanf("%hhu", &sl[i].fachsemester);

            printf("Geben Sie den Vornamen ein: ");
            scanf("%29s", sl[i].vorname);

            printf("Geben Sie den Nachnamen ein: ");
            scanf("%29s", sl[i].nachname);

            printf("Student erfolgreich eingetragen!\n");
            return;
        }
    }
    printf("Die Liste ist voll! Kein freier Platz vorhanden.\n");
}

void suchen(student sl[MAXL]) {
    printf("Geben Sie den Nachnamen des Studenten ein: ");
    char varb[MAXN];
    scanf("%29s", varb);

    for (int i = 0; i < MAXL; i++) {   // MAXL statt MAXN
        if (strcmp(sl[i].nachname, varb) == 0) {
            printf("Name: %s, %s\n", sl[i].nachname, sl[i].vorname);
            printf("Matrikelnummer: %u\n", sl[i].matrikelnummer);
            printf("Fachsemester: %u\n\n", sl[i].fachsemester);
            return;
        }
    }
    printf("Student mit dem Nachnamen %s nicht gefunden.\n", varb);
}

void loeschen(student sl[MAXL]) {
    printf("Geben Sie den Nachnamen ein, den Sie löschen möchten: ");
    char varb[MAXN];
    scanf("%29s", varb);

    for (int i = 0; i < MAXL; i++) {   // MAXL statt MAXN
        if (strcmp(sl[i].nachname, varb) == 0) {
            sl[i].matrikelnummer = 0;
            sl[i].fachsemester = 0;
            strcpy(sl[i].vorname, "n.n.");
            strcpy(sl[i].nachname, "n.n.");
            printf("Student wurde gelöscht.\n");
            return;
        }
    }
    printf("Student mit dem Nachnamen %s nicht gefunden.\n", varb);
}

int main() {
    student studentenListe[MAXL];
    init(studentenListe);

    int wahl;
    do {
        printf("1. Student eingeben\n");
        printf("2. Student suchen\n");
        printf("3. Student loeschen\n");
        printf("4. Alle Studenten anzeigen\n");
        printf("5. Beenden\n");
        printf("Wahl: ");
        scanf("%d", &wahl);

        switch (wahl) {
            case 1:
                eingeben(studentenListe);
                break;
            case 2:
                suchen(studentenListe);
                break;
            case 3:
                loeschen(studentenListe);
                break;
            case 4:
                print(studentenListe);
                break;
            case 5:
                printf("Programm beendet.\n");
                break;
            default:
                printf("Ungültige Wahl.\n");
        }
    } while (wahl != 5);

    return 0;
}
