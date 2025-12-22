#include <stdio.h>

int main(void) {
    const char* filename = "Text.txt";
    FILE* file = fopen(filename, "r");
    FILE* output = fopen("output.txt", "w");
    

    if (file == NULL) {
        perror("Fehler beim Öffnen der Datei");
        return 1;
    }

    char c;           // Einzelnes Zeichen aus der Datei
    while ((c = fgetc(file)) != EOF) {  // Zeichen für Zeichen lesen
        // Kleinbuchstaben in Großbuchstaben umwandeln
        if (c >= 'a' && c <= 'z') {
            c = c - 32;  // ASCII-Umrechnung
        }

        // Leerzeichen, Tabs und Zeilenumbrüche überspringen
        if (c != ' ' && c != '\n' && c != '\t') {
            fputc(c,output);  // Zeichen ausgeben
        }
    }

    fclose(file);
    fclose(output);
    printf("\n");  // Am Ende einen Zeilenumbruch
    return 0;
}
