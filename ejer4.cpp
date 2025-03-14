#include <cstdio>

int main() {
    double temperatura;
    char escala;

    printf("Ingresa la temperatura: ");
    scanf("%lf", &temperatura);

    printf("Ingresa la escala (C o F): ");
    scanf(" %c", &escala); // El espacio antes de %c consume el salto de línea anterior

    double resultado;

    if (escala == 'C' || escala == 'c') {
        resultado = (temperatura * 9.0 / 5.0) + 32;
        printf("%.2lf grados Celsius son %.2lf grados Fahrenheit.\n", temperatura, resultado);
    } else if (escala == 'F' || escala == 'f') {
        resultado = (temperatura - 32) * 5.0 / 9.0;
        printf("%.2lf grados Fahrenheit son %.2lf grados Celsius.\n", temperatura, resultado);
    } else {
        printf("Escala invalida.\n");
        return 1; // Sale con un código de error
    }

    return 0;
}
