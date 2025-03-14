#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
    int i;

    srand(time(0));

    printf("10 numeros aleatorios entre 1 y 100:\n");

    for (i = 0; i < 10; ++i) {
        printf("%d ", (rand() % 100) + 1);
    }

    printf("\n");

    return 0;
}
