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
    const int N = 3;
    AutoE autos[N];
    PersonaE personas[N];

    cout << "CAPTURA DE AUTOS" << endl;
    for (int i = 0; i < N; i++) {
        cout << "\nAuto #" << i + 1 << endl;
        capturarAuto(autos[i]);
    }

    cout << "\nCAPTURA DE PERSONAS" << endl;
    for (int i = 0; i < N; i++) {
        cout << "\nPersona #" << i + 1 << endl;
        capturarPersona(personas[i]);
    }

    cout << "\nLISTA DE AUTOS" << endl;
    for (int i = 0; i < N; i++)
        mostrarAuto(autos[i]);

    cout << "\nLISTA DE PERSONAS" << endl;
    for (int i = 0; i < N; i++)
        mostrarPersona(personas[i]);

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

