#ifndef LIBRERIAMERGE_H
#define LIBRERIAMERGE_H

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

    void mergeEnteros(int arr[], int izquierda, int derecha);
    void mergeCaracteres(char arr[], int izquierda, int derecha);
    void mergePersonas(Persona arr[], int izquierda, int derecha);

    void mostrarEnteros(int arr[], int n);
    void mostrarCaracteres(char arr[], int n);
    void mostrarPersonas(Persona arr[], int n);

private:
    void mergeInt(int arr[], int izquierda, int medio, int derecha);
    void mergeChar(char arr[], int izquierda, int medio, int derecha);
    void mergePers(Persona arr[], int izquierda, int medio, int derecha);
};

#endif

