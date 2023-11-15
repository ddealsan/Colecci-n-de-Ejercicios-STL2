#include <iostream>
#include "Funciones.h"

using namespace std;
using namespace Operaciones;

int main() {
    // Solicitar números al usuario
    double a, b;
    cout << "Ingrese el primer número (a): ";
    cin >> a;

    cout << "Ingrese el segundo número (b): ";
    cin >> b;

    // Utilizar las funciones
    cout << "Suma: " << sumar(a, b) << endl;
    cout << "Resta: " << restar(a, b) << endl;
    cout << "Multiplicación: " << multiplicar(a, b) << endl;

    // Manejo de división por cero
    if (b != 0) {
        cout << "División: " << dividir(a, b) << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }

    cout << "Elevar al cuadrado: " << elevarAlCuadrado(a) << endl;

    // Manejo de raíz cuadrada de número negativo
    if (a >= 0) {
        cout << "Raíz cuadrada de a: " << raizCuadrada(a) << endl;
    } else {
        cout << "No se puede calcular la raíz cuadrada de un número negativo." << endl;
    }

    // Manejo de logaritmo de número no positivo
    if (a > 0) {
        cout << "Logaritmo de a: " << logaritmo(a) << endl;
    } else {
        cout << "No se puede calcular el logaritmo de un número no positivo." << endl;
    }

    return 0;
}