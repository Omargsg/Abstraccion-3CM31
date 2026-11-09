#include "clasesPOO.h"

void mostrarTamanos() {
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
}

int main() {
    Auto miAuto;
    Persona persona1;

    mostrarTamanos();

    cout << "\nFIN DEL PROGRAMA\n";
    return 0;
}

