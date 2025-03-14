#include <iostream>
#include <cstdio> 

using namespace std;

int main() {
    double base, altura, area;

    printf("Ingresa la base del triangulo: ");
    scanf("%lf", &base); 

    printf("Ingresa la altura del triangulo: ");
    scanf("%lf", &altura); 

    area = (base * altura) / 2;

    printf("El area del triangulo es: %.2lf\n", area); 
    return 0;
}
