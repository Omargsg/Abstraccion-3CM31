#ifndef CLASES_H
#define CLASES_H

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
        cout << "[Constructor Auto] Objeto Auto creado." << endl;
    }
    Auto(string m, float p, int a) {
        modelo = m;
        precio = p;
        anio = a;
        cout << "[Constructor Auto] Objeto Auto inicializado con datos." << endl;
    }

    ~Auto() {
        cout << "[Destructor Auto] Objeto Auto destruido." << endl;
    }

    void capturarDatos() {
        cout << "Datos del Auto" << endl;
        cout << "Modelo: ";
        getline(cin, modelo);
        cout << "Precio: ";
        cin >> precio;
        cout << "Anio: ";
        cin >> anio;
        cin.ignore();
    }

    void mostrarDatos() {
        cout << "Auto: " << modelo << ", $" << precio << ", " << anio << endl;
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
        cout << "[Constructor Persona] Objeto Persona creado." << endl;
    }

    Persona(string n, string ap, string am, string g, int e) {
        nombre = n;
        apellidoP = ap;
        apellidoM = am;
        genero = g;
        edad = e;
        cout << "[Constructor Persona] Objeto Persona inicializado con datos." << endl;
    }

    ~Persona() {
        cout << "[Destructor Persona] Objeto Persona destruido." << endl;
    }

    void capturarDatos() {
        cout << "\nDatos de la Persona" << endl;
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Apellido Paterno: ";
        getline(cin, apellidoP);
        cout << "Apellido Materno: ";
        getline(cin, apellidoM);
        cout << "Genero: ";
        getline(cin, genero);
        cout << "Edad: ";
        cin >> edad;
        cin.ignore();
    }

    void mostrarDatos() {
        cout << "Persona: " << nombre << " " << apellidoP << " " << apellidoM << ", " 
		<< genero << ", " << edad << " anios" << endl;
    }
};

#endif

