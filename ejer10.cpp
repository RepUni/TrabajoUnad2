#include <cstdio>

int main() {
    int n;
    long long fib1 = 0, fib2 = 1, siguienteFib;

    printf("Ingresa el numero de terminos de la serie de Fibonacci que deseas generar: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Ingresa un numero entero positivo.\n");
        return 1; // Sale con un código de error
    }

    printf("Serie de Fibonacci hasta %d terminos:\n", n);

    if (n >= 1) {
        printf("%lld ", fib1);
    }
    if (n >= 2) {
        printf("%lld ", fib2);
    }

    for (int i = 3; i <= n; ++i) {
        siguienteFib = fib1 + fib2;
        printf("%lld ", siguienteFib);
        fib1 = fib2;
        fib2 = siguienteFib;
    }

    printf("\n"); // Salto de línea al final

    return 0;
}
