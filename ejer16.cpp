#include <cstdio>

int main() {
    int arreglo[] = {5, 12, 23, 37, 42, 55, 68, 79, 84, 91};
    int numero, encontrado = 0;
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);

    for (int i = 0; i < longitud; ++i) {
        if (arreglo[i] == numero) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("%d se encuentra en el arreglo.\n", numero);
    } else {
        printf("%d no se encuentra en el arreglo.\n", numero);
    }

    return 0;
}
