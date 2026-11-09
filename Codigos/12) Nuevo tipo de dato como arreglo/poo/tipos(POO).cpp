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
        nombre = "Sin nombre";
        apellidoP = "Sin apellido";
        apellidoM = "Sin apellido";
        genero = "No especificado";
        edad = 0;
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
    const int N = 3;
    Auto autos[N];
    Persona personas[N];

    cout << "CAPTURA DE AUTOS" << endl;
    for (int i = 0; i < N; i++) {
        cout << "\nAuto #" << i + 1 << endl;
        autos[i].capturarDatos();
    }

    cout << "\nCAPTURA DE PERSONAS" << endl;
    for (int i = 0; i < N; i++) {
        cout << "\nPersona #" << i + 1 << endl;
        personas[i].capturarDatos();
    }

    cout << "\nLISTA DE AUTOS" << endl;
    for (int i = 0; i < N; i++)
        autos[i].mostrarDatos();

    cout << "\nLISTA DE PERSONAS" << endl;
    for (int i = 0; i < N; i++)
        personas[i].mostrarDatos();

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

