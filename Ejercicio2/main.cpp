#include <iostream>
#include "rombo.h"
#include "cuadrado.h"
#include "rectangulo.h"
#include "circulo.h"
#include "triangulo.h"
using namespace std;
using namespace Geometria;
int main(){
    cout << "Area del rombo: " << area_rombo(5, 3) << endl;
    cout << "Area del cuadrado: " << area_cuadrado(5) << endl;
    cout << "Area del rectangulo: " << area_rectangulo(5, 3) << endl;
    cout << "Area del circulo: " << area_circulo(5) << endl;
    cout << "Area del triangulo: " << area_triangulo(5, 3) << endl;
    return 0;
}