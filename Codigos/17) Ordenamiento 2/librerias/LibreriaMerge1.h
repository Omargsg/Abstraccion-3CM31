#ifndef LIBRERIAMERGE1_H
#define LIBRERIAMERGE1_H

#include <iostream>
#include <string>
using namespace std;

struct Perro {
    string nombre;
    int edad;
};

class Ordenamiento {
public:
    Ordenamiento();   
    ~Ordenamiento();  

    void mergeEnteros(int arr[], int izquierda, int derecha);
    void mergeCaracteres(char arr[], int izquierda, int derecha);
    void mergePerros(Perro arr[], int izquierda, int derecha);

    void mostrarEnteros(int arr[], int n);
    void mostrarCaracteres(char arr[], int n);
    void mostrarPerros(Perro arr[], int n);

private:
    void mergeInt(int arr[], int izquierda, int medio, int derecha);
    void mergeChar(char arr[], int izquierda, int medio, int derecha);
    void mergePerr(Perro arr[], int izquierda, int medio, int derecha);
};

#endif

