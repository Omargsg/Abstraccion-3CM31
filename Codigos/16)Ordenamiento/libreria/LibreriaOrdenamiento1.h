#ifndef LIBRERIAORDENAMIENTO1_H
#define LIBRERIAORDENAMIENTO1_H

#include <iostream>
#include <string>
using namespace std;

struct Mascota {
    string raza;
    int edad;
};

class Ordenamiento {
public:
    Ordenamiento();   
    ~Ordenamiento();  

    void burbujaEnteros(int arr[], int n);
    void burbujaCaracteres(char arr[], int n);
    void burbujaMascotas(Mascota arr[], int n);

    void mostrarEnteros(int arr[], int n);
    void mostrarCaracteres(char arr[], int n);
    void mostrarMascotas(Mascota arr[], int n);
};

#endif

