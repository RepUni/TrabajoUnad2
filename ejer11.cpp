#include <cstdio>

int main() {
    int numero, suma = 0, digito;

    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    while (numero != 0) {
        digito = numero % 10;
        suma += digito;
        numero /= 10;
    }

    printf("La suma de los digitos es: %d\n", suma);

    return 0;
}
