#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool is_symmetrisch (int [MAX][MAX]){
    int matrix[MAX][MAX];
    int n, m;

    // Einlesen der Dimensionen der Matrix
    printf("Geben Sie die Anzahl der Zeilen (max %d) ein: ", MAX);
    scanf("%d", &n);
    printf("Geben Sie die Anzahl der Spalten (max %d) ein: ", MAX);
    scanf("%d", &m);

    // Einlesen der Matrixelemente
    printf("Geben Sie die Elemente der Matrix ein:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Überprüfen, ob die Matrix quadratisch ist
    if (n != m) {
        return false;
    }

    // Überprüfen auf Symmetrie
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }

    return true;    
}

int main() {
    int matrix[MAX][MAX];

    if (is_symmetrisch(matrix)) {
        printf("Die Matrix ist symmetrisch.\n");
    } else {
        printf("Die Matrix ist nicht symmetrisch.\n");
    }

    return 0;
}

