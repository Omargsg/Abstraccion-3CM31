#include "clases(POO).h"
using namespace std;

int main() {
    Auto miAuto;
    Persona persona1;

    miAuto.capturarDatos();
    persona1.capturarDatos();

    cout << "\nRESULTADOS" << endl;
    miAuto.mostrarDatos();
    persona1.mostrarDatos();

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

