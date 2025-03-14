#include <cstdio>

int main() {
    int matriz1[3][3], matriz2[3][3], resultado[3][3];
    int i, j;

    printf("Ingresa los elementos de la primera matriz 3x3:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Ingresa los elementos de la segunda matriz 3x3:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("La suma de las matrices es:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
