#include <stdio.h>
#include <string.h>
#include <ctype.h>  // für tolower
#include <stdbool.h> // für bool, true, false

#define Länge_String 100

bool ist_anagramm(char *s1, char *s2) {
    int count[256] = {0};  // ASCII-ISO LATIN-1 127 würden reichen
    
    // Zeichenkettenlängen prüfen
    if (strlen(s1) != strlen(s2))
        return false;

    // Zählen der Zeichen in s1
    for (int i = 0; s1[i] != '\0'; i++) {
        count[tolower((unsigned char)s1[i])]++;  // in Kleinbuchstaben
    }

    // Subtrahieren der Zeichen in s2
    for (int i = 0; s2[i] != '\0'; i++) {
        count[tolower((unsigned char)s2[i])]--;
    }

    // Prüfen, ob alle Werte 0 sind
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main() {
    char str1[Länge_String + 1], str2[Länge_String + 1];

    printf("Wort 1: ");
    scanf("%100s", str1);
    printf("Geben Sie die zweite Zeichenkette ein: ");
    scanf("%100s", str2);

    if (ist_anagramm(str1, str2)) {
        printf("Die Zeichenketten sind Anagramme.\n");
    } else {
        printf("Die Zeichenketten sind keine Anagramme.\n");
    }

    return 0;
}
