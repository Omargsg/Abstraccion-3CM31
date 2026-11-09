#ifndef TIPOSPE_H
#define TIPOSPE_H

#include <iostream>
#include <string>
using namespace std;

struct AutoE {
    string modelo;
    float precio;
    int anio;

    AutoE() {
        modelo = "Sin modelo";
        precio = 0.0;
        anio = 0;
        cout << "[Constructor AutoE] Objeto Auto creado.\n";
    }
    ~AutoE() {
        cout << "[Destructor AutoE] Objeto Auto destruido.\n";
    }
};

struct PersonaE {
    string nombre;
    string apellidoP;
    string apellidoM;
    string genero;
    int edad;

    PersonaE() {
        nombre = "Sin nombre";
        apellidoP = "Sin apellido";
        apellidoM = "Sin apellido";
        genero = "No especificado";
        edad = 0;
        cout << "[Constructor PersonaE] Objeto Persona creado.\n";
    }
    ~PersonaE() {
        cout << "[Destructor PersonaE] Objeto Persona destruido.\n";
    }
};

void mostrarTamanos();

#endif

