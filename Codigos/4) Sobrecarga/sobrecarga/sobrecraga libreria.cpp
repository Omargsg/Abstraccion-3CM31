#include <iostream>
#include "operaciones.h"
using namespace std;

int main() {
    char opcion;
    do {
        int tipo;
        cout << "Selecciona tipo de suma (0: pedir 2 numeros, 2: dos parametros, 3: tres parametros): ";
        cin >> tipo;

        if (tipo == 0) cout << "Resultado: " << sumar() << endl;
        else if (tipo == 2) {
            double x, y;
            cout << "Ingresa dos nameros: ";
            cin >> x >> y;
            cout << "Resultado: " << sumar(x, y) << endl;
        } else if (tipo == 3) {
            double x, y, z;
            cout << "Ingresa tres nameros: ";
            cin >> x >> y >> z;
            cout << "Resultado: " << sumar(x, y, z) << endl;
        } else cout << "Opcian invalida." << endl;

        cout << "Deseas hacer otra operacion (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "Vuelva pronto" << endl;
    return 0;
}

