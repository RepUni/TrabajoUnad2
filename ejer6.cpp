#include <cstdio>

int main() {
    int numero;
    long long factorial = 1; // Usamos long long para evitar desbordamiento con números grandes

    printf("Ingresa un numero entero no negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
        return 1; // Sale con un código de error
    }

    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    printf("El factorial de %d es: %lld\n", numero, factorial);

    return 0;
}
