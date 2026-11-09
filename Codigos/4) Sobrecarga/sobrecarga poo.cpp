#include <iostream>
using namespace std;

class Calculadora {
public:
    double sumar() {
        double a, b;
        cout << "Ingresa el primer numero: ";
        cin >> a;
        cout << "Ingresa el segundo numero: ";
        cin >> b;
        return a + b;
    }

    double sumar(double a, double b) { return a + b; }

    double sumar(double a, double b, double c) { return a + b + c; }
};

int main() {
    Calculadora calc;
    char opcion;
    do {
        int tipo;
        cout << "Selecciona tipo de suma (0: pedir 2 numeros, 2: dos parametros, 3: tres parametros): ";
        cin >> tipo;

        if (tipo == 0) cout << "Resultado: " << calc.sumar() << endl;
        else if (tipo == 2) {
            double x, y;
            cout << "Ingresa dos numeros: ";
            cin >> x >> y;
            cout << "Resultado: " << calc.sumar(x, y) << endl;
        } else if (tipo == 3) {
            double x, y, z;
            cout << "Ingresa tres numeros: ";
            cin >> x >> y >> z;
            cout << "Resultado: " << calc.sumar(x, y, z) << endl;
        } else cout << "Opcion invalida." << endl;

        cout << "Deseas hacer otra operacion (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "Vuelva pronto" << endl;
    return 0;
}

