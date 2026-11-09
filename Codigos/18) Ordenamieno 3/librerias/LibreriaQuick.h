#ifndef LIBRERIAQUICK_H
#define LIBRERIAQUICK_H

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

    void quickEnteros(int arr[], int bajo, int alto);
    void quickCaracteres(char arr[], int bajo, int alto);
    void quickPersonas(Persona arr[], int bajo, int alto);

    void mostrarEnteros(int arr[], int n);
    void mostrarCaracteres(char arr[], int n);
    void mostrarPersonas(Persona arr[], int n);

private:
    int particionEnteros(int arr[], int bajo, int alto);
    int particionCaracteres(char arr[], int bajo, int alto);
    int particionPersonas(Persona arr[], int bajo, int alto);
};

#endif

