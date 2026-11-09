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
        cout << "[Constructor Auto] Objeto Auto creado." << endl;
    }
    ~Auto() {
        cout << "[Destructor Auto] Objeto Auto destruido." << endl;
    }

    void capturarDatos() {
        cout << "Modelo: ";
        getline(cin, modelo);
        cout << "Precio: ";
        cin >> precio;
        cout << "Anio: ";
        cin >> anio;
        cin.ignore();
    }

    void mostrarDatos() const {
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
        cout << "[Constructor Persona] Objeto Persona creado." << endl;
    }
    ~Persona() {
        cout << "[Destructor Persona] Objeto Persona destruido." << endl;
    }

    void capturarDatos() {
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

    void mostrarDatos() const {
        cout << "Persona: " << nombre << " " << apellidoP << " " << apellidoM
             << ", " << genero << ", " << edad << " anios" << endl;
    }
};

int main() {
    int n;
    cout << "¿Cuantos autos y personas desea capturar? ";
    cin >> n;
    cin.ignore();

    Auto *autos = new Auto[n];
    Persona *personas = new Persona[n];

    cout << "\nCAPTURA DE AUTOS" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nAuto #" << i + 1 << endl;
        autos[i].capturarDatos();
    }

    cout << "\nCAPTURA DE PERSONAS" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nPersona #" << i + 1 << endl;
        personas[i].capturarDatos();
    }

    cout << "\nLISTA DE AUTOS" << endl;
    for (int i = 0; i < n; i++)
        autos[i].mostrarDatos();

    cout << "\nLISTA DE PERSONAS" << endl;
    for (int i = 0; i < n; i++)
        personas[i].mostrarDatos();

    delete[] autos;
    delete[] personas;

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

