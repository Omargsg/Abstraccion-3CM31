#include <iostream>
using namespace std;

// Clase base: operaciones basicas de suma
class CalculadoraBase {
public:
    // Suma sin parametros (pide al usuario)
    double sumar() {
        double a, b;
        cout << "Ingresa el primer numero: ";
        cin >> a;
        cout << "Ingresa el segundo numero: ";
        cin >> b;
        return a + b;
    }

    // Suma con 2 parametros
    double sumar(double a, double b) {
        return a + b;
    }

    // Suma con 3 parametros
    double sumar(double a, double b, double c) {
        return a + b + c;
    }
};

// Clase derivada: hereda de CalculadoraBase y agrega mas operaciones
class CalculadoraAvanzada : public CalculadoraBase {
public:
    // Resta con dos parametros
    double restar(double a, double b) {
        return a - b;
    }

    // Multiplicacion con dos parametros
    double multiplicar(double a, double b) {
        return a * b;
    }
};

int main() {
    CalculadoraAvanzada calc;
    char opcion;
    do {
        int operacion;
        cout << "Selecciona operacion: 1=Suma, 2=Resta, 3=Multiplicacion: ";
        cin >> operacion;

        if (operacion == 1) { // Suma
            int tipo;
            cout << "Tipo de suma (0=pide 2 numeros, 2=dos parametros, 3=tres parametros): ";
            cin >> tipo;

            if (tipo == 0)
                cout << "Resultado: " << calc.sumar() << endl;
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
            } else
                cout << "Opcion invalida." << endl;

        } else if (operacion == 2) { // Resta
            double x, y;
            cout << "Ingresa dos numeros: ";
            cin >> x >> y;
            cout << "Resultado: " << calc.restar(x, y) << endl;

        } else if (operacion == 3) { // Multiplicacion
            double x, y;
            cout << "Ingresa dos numeros: ";
            cin >> x >> y;
            cout << "Resultado: " << calc.multiplicar(x, y) << endl;

        } else {
            cout << "Opcion invalida." << endl;
        }

        cout << "Deseas hacer otra operacion? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "Programa terminado." << endl;
    return 0;
}


