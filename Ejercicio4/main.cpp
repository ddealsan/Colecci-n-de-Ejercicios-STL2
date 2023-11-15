#include <iostream>
#include "ciencias.h"

using namespace std;

int main() {
    double masa = 5;
    double energia = Ciencia::Fisica::energia(masa);
    cout << "Energia: " << energia << endl;

    double radio = 3;
    double area = Ciencia::Matematicas::area_circulo(radio);
    cout << "Area: " << area << endl;

    double crecimiento = Ciencia::Biologia::CalcularCrecimiento(5, 2);
    cout << "Crecimiento: " << crecimiento << endl;

    return 0;
}