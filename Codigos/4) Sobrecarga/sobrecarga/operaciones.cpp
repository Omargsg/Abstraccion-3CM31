//operaciones.cpp
#include <iostream>
#include "operaciones.h"
using namespace std;

double sumar() {
    double a, b;
    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;
    return a + b;
}

double sumar(double a, double b) { return a + b; }

double sumar(double a, double b, double c) { return a + b + c; }

