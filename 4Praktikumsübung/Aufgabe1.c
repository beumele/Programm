#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool is_symmetrisch(int matrix[MAX][MAX], int n, int m) {
    // Symmetrie ist nur bei quadratischen Matrizen möglich
    if (n != m) {
        return false;
    }

    // Vergleiche jedes Paar (i,j) mit (j,i)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main(void) {
    int matrix[MAX][MAX];
    int n, m;

    printf("Geben Sie die Anzahl der Zeilen (max %d) ein: ", MAX);
    scanf("%d", &n);

    printf("Geben Sie die Anzahl der Spalten (max %d) ein: ", MAX);
    scanf("%d", &m);

    printf("Geben Sie die Elemente der Matrix (%d x %d) ein:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (is_symmetrisch(matrix, n, m)) {
        printf("Die Matrix ist symmetrisch.\n");
    } else {
        printf("Die Matrix ist nicht symmetrisch.\n");
    }

    return 0;
}
