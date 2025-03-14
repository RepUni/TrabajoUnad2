#include <cstdio>

int main() {
    int numero;

    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d es un numero par.\n", numero);
    } else {
        printf("%d es un numero impar.\n", numero);
    }

    return 0;
}
