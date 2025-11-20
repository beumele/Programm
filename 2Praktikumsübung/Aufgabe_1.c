#include <stdio.h>

int main() {
    int Lauf_varb = 0;
    int input; 
    int Mitlaufen = 0;

    while (input != 0) {
        scanf("%d", &input); // & gibt die speicheradresse für input an
        Lauf_varb += input;
        Mitlaufen += 1;
    }

    printf("Durschnitt: %d\n", Lauf_varb/(Mitlaufen -1));
    return 0;
}
