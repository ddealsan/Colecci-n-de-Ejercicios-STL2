cmake_minimum_required(VERSION 3.26)
project("Coleccion-de-Ejercicios-STL2")

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejercicio1
        Ejercicio1/main.cpp
        Ejercicio1/funciones.cpp
        Ejercicio1/funciones.h
)

add_executable(Ejercicio2
        Ejercicio2/main.cpp
        Ejercicio2/circulo.cpp
        Ejercicio2/circulo.h
        Ejercicio2/triangulo.cpp
        Ejercicio2/triangulo.h
        Ejercicio2/rectangulo.cpp
        Ejercicio2/rectangulo.h
        Ejercicio2/cuadrado.cpp
        Ejercicio2/cuadrado.h
        Ejercicio2/rombo.cpp
        Ejercicio2/rombo.h
)

add_executable(Ejercicio3
        Ejercicio3/main.cpp
)

add_executable(Ejercicio4
        Ejercicio4/main.cpp
        Ejercicio4/ciencias.h
)

add_executable(Ejercicio5
        Ejercicio5/main.cpp
)

