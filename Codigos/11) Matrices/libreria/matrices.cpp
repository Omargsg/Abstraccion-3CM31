//matrices.cpp
#include "matrices.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void generarAleatorios(int matriz[MAX][MAX], int filas, int columnas) {
    for(int i = 0; i < filas; i++)
        for(int j = 0; j < columnas; j++)
            matriz[i][j] = rand() % 10;
}

void mostrar(int matriz[MAX][MAX], int filas, int columnas) {
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }
}

void multiplicarPorConstante(int matriz[MAX][MAX], int filas, int columnas, int k) {
    for(int i = 0; i < filas; i++)
        for(int j = 0; j < columnas; j++)
            matriz[i][j] *= k;
}

void multiplicarMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX],
                         int filasA, int colA, int colB) {
    for(int i = 0; i < filasA; i++)
        for(int j = 0; j < colB; j++) {
            C[i][j] = 0;
            for(int k = 0; k < colA; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

