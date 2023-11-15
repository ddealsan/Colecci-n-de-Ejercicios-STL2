#ifndef COLECCION_DE_EJERCICIOS_STL2_CIENCIAS_H
#define COLECCION_DE_EJERCICIOS_STL2_CIENCIAS_H

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double energia(double masa){
            return masa * c * c;
        }
    }
    namespace Matematicas {
        double pi = 3.14159265358979323846;
        double area_circulo(double radio){
            return pi * radio * radio;
        }
    }
    namespace Biologia {
        const double ConstanteBiologica = 1.23;
        double CalcularCrecimiento(double tasa, double tiempo){
            return tasa * tiempo * ConstanteBiologica;
        }
    }
}


#endif //COLECCION_DE_EJERCICIOS_STL2_CIENCIAS_H
