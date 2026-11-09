#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <iostream>
using namespace std;

struct Numeros {
    float n1, n2, n3, n4, n5;
    float suma, promedio, maximo, minimo;

    Numeros() {
        n1 = n2 = n3 = n4 = n5 = 0;
        suma = promedio = maximo = minimo = 0;
        cout << "[Constructor Numeros] Objeto creado." << endl;
    }

    ~Numeros() {
        cout << "[Destructor Numeros] Objeto destruido." << endl;
    }
};

// Funciones
void capturarNumeros(Numeros &n);
void calcularDatos(Numeros &n);
void mostrarResultados(Numeros n);

#endif

