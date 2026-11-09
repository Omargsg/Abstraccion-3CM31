#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <iostream>
using namespace std;

struct Numeros {
    float *valores;   
    int cantidad;
    float suma;
    float promedio;
    float maximo;
    float minimo;

    Numeros(int n = 5) {
        cantidad = n;
        valores = new float[cantidad]; // Reserva de memoria dinámica
        suma = promedio = maximo = minimo = 0;
        cout << "[Constructor Numeros] Memoria reservada para " 
		<< cantidad << " numeros." << endl;
    }

    ~Numeros() {
        delete[] valores; // Libera memoria
        cout << "[Destructor Numeros] Memoria liberada." << endl;
    }
};

// Funciones
void capturarNumeros(Numeros &n);
void calcularDatos(Numeros &n);
void mostrarResultados(Numeros n);

#endif

