#include "tipos(POO).h"
using namespace std;

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

