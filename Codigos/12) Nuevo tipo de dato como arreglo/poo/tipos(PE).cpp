#include <iostream>
#include <string>
using namespace std;

struct Auto {
    string modelo;
    float precio;
    int anio;
};

struct Persona {
    string nombre;
    string apellidoP;
    string apellidoM;
    string genero;
    int edad;
};

int main() {
    const int N = 3;
    Auto autos[N];
    Persona personas[N];

    cout << "CAPTURA DE AUTOS" << endl;
    for (int i = 0; i < N; i++) {
        cout << "\nAuto #" << i + 1 << endl;
        cout << "Modelo: ";
        getline(cin, autos[i].modelo);
        cout << "Precio: ";
        cin >> autos[i].precio;
        cout << "Anio: ";
        cin >> autos[i].anio;
        cin.ignore();
    }

    cout << "\nCAPTURA DE PERSONAS" << endl;
    for (int i = 0; i < N; i++) {
        cout << "\nPersona #" << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, personas[i].nombre);
        cout << "Apellido Paterno: ";
        getline(cin, personas[i].apellidoP);
        cout << "Apellido Materno: ";
        getline(cin, personas[i].apellidoM);
        cout << "Genero: ";
        getline(cin, personas[i].genero);
        cout << "Edad: ";
        cin >> personas[i].edad;
        cin.ignore();
    }

    cout << "\nLISTA DE AUTOS" << endl;
    for (int i = 0; i < N; i++)
        cout << "Auto: " << autos[i].modelo << ", $" << autos[i].precio << ", " << autos[i].anio << endl;

    cout << "\nLISTA DE PERSONAS" << endl;
    for (int i = 0; i < N; i++)
        cout << "Persona: " << personas[i].nombre << " " << personas[i].apellidoP << " " << personas[i].apellidoM
             << ", " << personas[i].genero << ", " << personas[i].edad << " anios" << endl;

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

