#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <iostream>
using namespace std;

struct Numeros {
    float valores[5];
    float suma;
    float promedio;
    float maximo;
    float minimo;

    Numeros() {
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

