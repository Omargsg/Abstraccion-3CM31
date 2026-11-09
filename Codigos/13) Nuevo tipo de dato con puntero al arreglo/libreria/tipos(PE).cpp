#include "tipos(PE).h"
using namespace std;

void capturarAuto(AutoE &a) {
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
    cout << "Persona: " << p.nombre << " " << p.apellidoP << " " << p.apellidoM
         << ", " << p.genero << ", " << p.edad << " anios" << endl;
}

int main() {
    int n;
    cout << "¿Cuantos autos y personas desea capturar? ";
    cin >> n;
    cin.ignore();

    AutoE *autos = new AutoE[n];
    PersonaE *personas = new PersonaE[n];

    cout << "\nCAPTURA DE AUTOS" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nAuto #" << i + 1 << endl;
        capturarAuto(autos[i]);
    }

    cout << "\nCAPTURA DE PERSONAS" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nPersona #" << i + 1 << endl;
        capturarPersona(personas[i]);
    }

    cout << "\nLISTA DE AUTOS" << endl;
    for (int i = 0; i < n; i++)
        mostrarAuto(autos[i]);

    cout << "\nLISTA DE PERSONAS" << endl;
    for (int i = 0; i < n; i++)
        mostrarPersona(personas[i]);

    delete[] autos;
    delete[] personas;

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

