#include <iostream>
using namespace std;

// Clase base: operaciones basicas de suma
class CalculadoraBase {
public:
    // Suma sin parametros (pide dos numeros al usuario)
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

    // Metodo virtual para sobrescribir en clases derivadas
    virtual double operar(double a, double b) {
        return sumar(a, b); // por defecto suma
    }

    virtual ~CalculadoraBase() {} // Destructor virtual
};

// Clase derivada: agrega operaciones avanzadas
class CalculadoraAvanzada : public CalculadoraBase {
public:
    double restar(double a, double b) {
        return a - b;
    }

    double multiplicar(double a, double b) {
        return a * b;
    }

    // Por defecto sigue haciendo suma
    double operar(double a, double b) override {
        return sumar(a, b);
    }
};

// Clase derivada final: sobrescribe operar para multiplicacion, potencia y division sucesiva
class CalculadoraNueva : public CalculadoraAvanzada {
public:
    double operar(double a, double b) override {
        int opcion;
        cout << "Selecciona operacion con 2 numeros:\n";
        cout << "1 = Multiplicacion por sumas sucesivas\n";
        cout << "2 = Potencia por multiplicaciones sucesivas\n";
        cout << "3 = Division por restas sucesivas\n";
        cin >> opcion;

        if (opcion == 1) { // Multiplicacion por sumas sucesivas
            double resultado = 0;
            for (int i = 0; i < static_cast<int>(b); i++) {
                resultado += a;
            }
            return resultado;
        } else if (opcion == 2) { // Potencia por multiplicaciones sucesivas
            double resultado = 1;
            for (int i = 0; i < static_cast<int>(b); i++) {
                resultado *= a;
            }
            return resultado;
        } else if (opcion == 3) { // Division por restas sucesivas
            if (b == 0) {
                cout << "Error: division por cero." << endl;
                return 0;
            }
            double resultado = 0;
            double acumulador = a;
            while (acumulador >= b) {
                acumulador -= b;
                resultado++;
            }
            return resultado;
        } else {
            cout << "Opcion invalida. Se devuelve 0." << endl;
            return 0;
        }
    }
};

int main() {
    CalculadoraNueva calc;
    char opcion;

    do {
        int tipo;
        cout << "\nSelecciona tipo de operacion:\n";
        cout << "1 = Operaciones con 2 numeros (multiplicacion, potencia, division)\n";
        cout << "2 = Suma de 3 numeros\n";
        cout << "3 = Suma de 2 numeros con ingreso manual\n";
        cin >> tipo;

        if (tipo == 1) {
            double a, b;
            cout << "Ingresa dos numeros: ";
            cin >> a >> b;
            cout << "Resultado: " << calc.operar(a, b) << endl;
        } else if (tipo == 2) {
            double x, y, z;
            cout << "Ingresa tres numeros: ";
            cin >> x >> y >> z;
            cout << "Resultado: " << calc.sumar(x, y, z) << endl;
        } else if (tipo == 3) {
            cout << "Resultado: " << calc.sumar() << endl;
        } else {
            cout << "Opcion invalida." << endl;
        }

        cout << "Deseas hacer otra operacion? (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    cout << "Programa terminado." << endl;
    return 0;
}

