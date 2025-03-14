#include <cstdio>

int main() {
    int num1, num2, num3;

    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingresa el tercer numero: ");
    scanf("%d", &num3);

    int mayor = num1; // Asumimos que el primero es el mayor inicialmente

    if (num2 > mayor) {
        mayor = num2;
    }

    if (num3 > mayor) {
        mayor = num3;
    }

    printf("El numero mayor es: %d\n", mayor);

    return 0;
}
