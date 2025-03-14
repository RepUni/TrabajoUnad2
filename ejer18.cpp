#include <cstdio>
#include <cstring>

int main() {
    char cadena[100];
    int longitud, i, contadorVocales = 0;

    printf("Ingresa una cadena de texto: ");
    scanf("%[^\n]", cadena);

    longitud = strlen(cadena);

    for (i = 0; i < longitud; ++i) {
        if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u' ||
            cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U') {
            contadorVocales++;
        }
    }

    printf("La cadena contiene %d vocales.\n", contadorVocales);

    return 0;
}
