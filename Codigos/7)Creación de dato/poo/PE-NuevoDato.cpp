#include <iostream>
#include <string>
using namespace std;

// Nuevo tipo de dato Auto
struct Auto {
    string modelo;
    float precio;
    int anio;
};

// Nuevo tipo de dato Persona
struct Persona {
    string nombre;
    string apellidoP;
    string apellidoM;
    string genero;
    int edad;
};

int main() {
    Auto miAuto;
    Persona persona1;

    // Capturar datos del auto
    cout << "Datos del Auto" << endl;
    cout << "Modelo: ";
    getline(cin, miAuto.modelo);
    cout << "Precio: ";
    cin >> miAuto.precio;
    cout << "Anio: ";
    cin >> miAuto.anio;
    cin.ignore(); // limpiar el buffer

    // Capturar datos de la persona
    cout << "\nDatos de la Persona" << endl;
    cout << "Nombre: ";
    getline(cin, persona1.nombre);
    cout << "Apellido Paterno: ";
    getline(cin, persona1.apellidoP);
    cout << "Apellido Materno: ";
    getline(cin, persona1.apellidoM);
    cout << "Genero: ";
    getline(cin, persona1.genero);
    cout << "Edad: ";
    cin >> persona1.edad;

    // Mostrar resultados
    cout << "\nRESULTADOS" << endl;
    cout << "Auto: " << miAuto.modelo << ", $" << miAuto.precio << ", " << miAuto.anio << endl;
    cout << "Persona: " << persona1.nombre << " " << persona1.apellidoP << " " << persona1.apellidoM
         << ", " << persona1.genero << ", " << persona1.edad << " anios" << endl;

    return 0;
}

