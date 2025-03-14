#include <iostream>

using namespace std;

void main() {
    double numero1, numero2;
    char operador;

    cout << "Ingresa el primer numero: ";
    cin >> numero1;

    cout << "Ingresa el operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingresa el segundo numero: ";
    cin >> numero2;

    double resultado;

    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Operador invalido." << endl;
            return 1; 
    }

    cout << "Resultado: " << resultado << endl;


}
