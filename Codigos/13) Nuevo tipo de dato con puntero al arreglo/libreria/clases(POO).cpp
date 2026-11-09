#include "clases(POO).h"
using namespace std;

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

