//operaciones.cpp

#include <iostream>
#include "operaciones.h"
using namespace std;

double sumar(double a, double b) { return a + b; }
double restar(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) {
    if (b != 0) return a / b;
    else {
        cout << "Error: Division entre cero no valido." << endl;
        return 0;
    }
}

