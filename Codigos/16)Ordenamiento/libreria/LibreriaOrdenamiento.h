#ifndef LIBRERIAORDENAMIENTO_H
#define LIBRERIAORDENAMIENTO_H

#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

class Ordenamiento {
public:
    Ordenamiento();   
    ~Ordenamiento();  

    void burbujaEnteros(int arr[], int n);
    void burbujaCaracteres(char arr[], int n);
    void burbujaPersonas(Persona arr[], int n);

    void mostrarEnteros(int arr[], int n);
    void mostrarCaracteres(char arr[], int n);
    void mostrarPersonas(Persona arr[], int n);
};

#endif

