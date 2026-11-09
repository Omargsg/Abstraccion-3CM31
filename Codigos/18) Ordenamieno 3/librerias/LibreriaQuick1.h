#ifndef LIBRERIAQUICK1_H
#define LIBRERIAQUICK1_H

#include <iostream>
#include <string>
using namespace std;

struct Mascota {
    string nombre;
    int edad;
};

class Ordenamiento {
public:
    Ordenamiento();    
    ~Ordenamiento();  

    void quickEnteros(int arr[], int bajo, int alto);
    void quickCaracteres(char arr[], int bajo, int alto);
    void quickMascotas(Mascota arr[], int bajo, int alto);

    void mostrarEnteros(int arr[], int n);
    void mostrarCaracteres(char arr[], int n);
    void mostrarMascotas(Mascota arr[], int n);

private:
    int particionEnteros(int arr[], int bajo, int alto);
    int particionCaracteres(char arr[], int bajo, int alto);
    int particionMascotas(Mascota arr[], int bajo, int alto);
};

#endif

