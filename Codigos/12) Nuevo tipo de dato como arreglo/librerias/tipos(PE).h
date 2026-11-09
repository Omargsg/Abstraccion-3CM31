#ifndef TIPOS_H
#define TIPOS_H

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
        cout << "[Constructor AutoE] Objeto Auto creado." << endl;
    }

    AutoE(string m, float p, int a) {
        modelo = m;
        precio = p;
        anio = a;
        cout << "[Constructor AutoE] Objeto Auto inicializado con datos." << endl;
    }

    ~AutoE() {
        cout << "[Destructor AutoE] Objeto Auto destruido." << endl;
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
        cout << "[Constructor PersonaE] Objeto Persona creado." << endl;
    }

    PersonaE(string n, string ap, string am, string g, int e) {
        nombre = n;
        apellidoP = ap;
        apellidoM = am;
        genero = g;
        edad = e;
        cout << "[Constructor PersonaE] Objeto Persona inicializado con datos." << endl;
    }

    ~PersonaE() {
        cout << "[Destructor PersonaE] Objeto Persona destruido." << endl;
    }
};

void capturarAuto(AutoE &a);
void mostrarAuto(AutoE a);
void capturarPersona(PersonaE &p);
void mostrarPersona(PersonaE p);
#endif

