#include <cstdio>
#include <cstring>

int main() {
    char cadena[100];
    int longitud, i, j, esPalindromo = 1;

    printf("Ingresa una palabra o numero: ");
    scanf("%s", cadena);

    longitud = strlen(cadena);

    for (i = 0, j = longitud - 1; i < j; ++i, --j) {
        if (cadena[i] != cadena[j]) {
            esPalindromo = 0;
            break;
        }
    }

    if (esPalindromo) {
        printf("%s es un palindromo.\n", cadena);
    } else {
        printf("%s no es un palindromo.\n", cadena);
    }

    return 0;
}
