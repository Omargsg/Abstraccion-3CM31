#include "tipos(PE).h"
using namespace std;

void capturarAuto(AutoE &a) {
    cout << "Datos del Auto" << endl;
    cout << "Modelo: ";
    getline(cin, a.modelo);
    cout << "Precio: ";
    cin >> a.precio;
    cout << "Anio: ";
    cin >> a.anio;
    cin.ignore();
}

void mostrarAuto(AutoE a) {
    cout << "Auto: " << a.modelo << ", $" << a.precio << ", " << a.anio << endl;
}

void capturarPersona(PersonaE &p) {
    cout << "\nDatos de la Persona" << endl;
    cout << "Nombre: ";
    getline(cin, p.nombre);
    cout << "Apellido Paterno: ";
    getline(cin, p.apellidoP);
    cout << "Apellido Materno: ";
    getline(cin, p.apellidoM);
    cout << "Genero: ";
    getline(cin, p.genero);
    cout << "Edad: ";
    cin >> p.edad;
    cin.ignore();
}

void mostrarPersona(PersonaE p) {
    cout << "Persona: " << p.nombre << " " << p.apellidoP << " " << p.apellidoM << ", " 
	<< p.genero << ", " << p.edad << " anios" << endl;
}

int main() {
    AutoE miAuto;
    PersonaE persona1;

    capturarAuto(miAuto);
    capturarPersona(persona1);

    cout << "\nRESULTADOS" << endl;
    mostrarAuto(miAuto);
    mostrarPersona(persona1);

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

