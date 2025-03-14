#include <cstdio>

int main() {
    int numero;
    int esPrimo = 1; // 1 significa verdadero, 0 significa falso

    printf("Ingresa un numero entero mayor que 1: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("%d no es un numero primo.\n", numero);
        return 0; // Termina el programa
    }

    for (int i = 2; i * i <= numero; ++i) { // Solo necesitamos verificar hasta la raíz cuadrada
        if (numero % i == 0) {
            esPrimo = 0; // No es primo
            break; // Salimos del bucle, ya no es necesario verificar más
        }
    }

    if (esPrimo) {
        printf("%d es un numero primo.\n", numero);
    } else {
        printf("%d no es un numero primo.\n", numero);
    }

    return 0;
}
