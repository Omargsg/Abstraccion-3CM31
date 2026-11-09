#include <iostream>
#include <string>
using namespace std;

struct Auto {
    string modelo;
    float precio;
    int anio;

    Auto() {
        cout << "[Constructor Auto] Objeto Auto creado." << endl;
    }
    ~Auto() {
        cout << "[Destructor Auto] Objeto Auto destruido." << endl;
    }
};

struct Persona {
    string nombre;
    string apellidoP;
    string apellidoM;
    string genero;
    int edad;

    Persona() {
        cout << "[Constructor Persona] Objeto Persona creada." << endl;
    }
    ~Persona() {
        cout << "[Destructor Persona] Objeto Persona destruida." << endl;
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
        cout << "Modelo: ";
        getline(cin, autos[i].modelo);
        cout << "Precio: ";
        cin >> autos[i].precio;
        cout << "Anio: ";
        cin >> autos[i].anio;
        cin.ignore();
    }

    cout << "\nCAPTURA DE PERSONAS" << endl;
    for (int i = 0; i < n; i++) {
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
    for (int i = 0; i < n; i++)
        cout << "Auto: " << autos[i].modelo << ", $" << autos[i].precio 
		<< ", " << autos[i].anio << endl;

    cout << "\nLISTA DE PERSONAS" << endl;
    for (int i = 0; i < n; i++)
        cout << "Persona: " << personas[i].nombre << " " << personas[i].apellidoP 
		<< " "<< personas[i].apellidoM << ", " << personas[i].genero << ", " 
		<< personas[i].edad << " anios" << endl;

    delete[] autos;
    delete[] personas;

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

