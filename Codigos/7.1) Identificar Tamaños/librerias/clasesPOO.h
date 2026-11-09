#ifndef CLASESPOO_H
#define CLASESPOO_H

#include <iostream>
#include <string>
using namespace std;

class Auto {
private:
    string modelo;
    float precio;
    int anio;

public:
    Auto() {
        modelo = "Sin modelo";
        precio = 0.0;
        anio = 0;
        cout << "[Constructor Auto] Objeto Auto creado.\n";
    }
    ~Auto() {
        cout << "[Destructor Auto] Objeto Auto destruido.\n";
    }
};

class Persona {
private:
    string nombre;
    string apellidoP;
    string apellidoM;
    string genero;
    int edad;

public:
    Persona() {
        nombre = "Sin nombre";
        apellidoP = "Sin apellido";
        apellidoM = "Sin apellido";
        genero = "No especificado";
        edad = 0;
        cout << "[Constructor Persona] Objeto Persona creado.\n";
    }
    ~Persona() {
        cout << "[Destructor Persona] Objeto Persona destruido.\n";
    }
};

void mostrarTamanos();

#endif

