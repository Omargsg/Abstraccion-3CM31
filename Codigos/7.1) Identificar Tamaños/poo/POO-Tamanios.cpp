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
        cout << "[Constructor Auto] Objeto Auto creado.\n";
    }
    ~Auto() {
        cout << "[Destructor Auto] Objeto Auto destruido.\n";
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
        cout << "[Constructor Persona] Objeto Persona creado.\n";
    }
    ~Persona() {
        cout << "[Destructor Persona] Objeto Persona destruido.\n";
    }
};

int main() {
    Auto miAuto;
    Persona persona1;

    cout << "\nTamanios de Tipos Basicos\n";
    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "float: " << sizeof(float) << " bytes\n";
    cout << "double: " << sizeof(double) << " bytes\n";
    cout << "char: " << sizeof(char) << " bytes\n";
    cout << "bool: " << sizeof(bool) << " bytes\n";
    cout << "string: " << sizeof(string) << " bytes (depende del sistema)\n";

    cout << "\nTamanios de Tipos Creados\n";
    cout << "Auto: " << sizeof(Auto) << " bytes\n";
    cout << "Persona: " << sizeof(Persona) << " bytes\n";

    cout << "\nFIN DEL PROGRAMA\n";
    return 0;
}

