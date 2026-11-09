#include <iostream>
#include <cstdlib>
#include <ctime>
#include "matrices.h"
using namespace std;

int main() {
    srand(time(0));

    int filasA, colA, filasB, colB;
    cout << "Filas de A: "; cin >> filasA;
    cout << "Columnas de A: "; cin >> colA;
    cout << "Filas de B: "; cin >> filasB;
    cout << "Columnas de B: "; cin >> colB;

    if(colA != filasB) {
        cout << "Error: columnas de A deben ser iguales a filas de B.\n";
        return 0;
    }

    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    generarAleatorios(A, filasA, colA);
    generarAleatorios(B, filasB, colB);

    cout << "\nMatriz A:\n"; mostrar(A, filasA, colA);
    cout << "\nMatriz B:\n"; mostrar(B, filasB, colB);

    int constante;
    cout << "\nMultiplicar A por constante: "; cin >> constante;
    multiplicarPorConstante(A, filasA, colA, constante);
    cout << "A * " << constante << ":\n"; mostrar(A, filasA, colA);

    multiplicarMatrices(A, B, C, filasA, colA, colB);
    cout << "\nA * B:\n"; mostrar(C, filasA, colB);

    return 0;
}

