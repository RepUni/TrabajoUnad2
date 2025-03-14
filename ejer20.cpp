#include <cstdio>

int main() {
    FILE *archivo;
    char texto[100];

    // Escritura en el archivo
    archivo = fopen("datos.txt", "w");
    if (archivo == NULL) {
        printf("Error al crear el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Este es un ejemplo de escritura en un archivo de texto.\n");
    fprintf(archivo, "Linea 2.\n");

    fclose(archivo);

    // Lectura del archivo
    archivo = fopen("datos.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo para lectura.\n");
        return 1;
    }

    printf("Contenido del archivo:\n");
    while (fgets(texto, 100, archivo) != NULL) {
        printf("%s", texto);
    }

    fclose(archivo);

    return 0;
}
