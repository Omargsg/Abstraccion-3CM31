#include <iostream>
using namespace std;

double sumar(double a, double b) { return a + b; }
double restar(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) {
    
	if (b != 0) return a / b;
    else {
        cout << "Error: Division entre cero no valida." << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    char operacion, opcion;

    do {
        cout << "Ingresa el primer numero: ";
        cin >> num1;
        cout << "Ingresa el operador (+, -, *, /): ";
        cin >> operacion;
        cout << "Ingresa el segundo numero: ";
        cin >> num2;

        if (operacion == '+') cout << "Resultado: " << sumar(num1, num2) << endl;
        else if (operacion == '-') cout << "Resultado: " << restar(num1, num2) << endl;
        else if (operacion == '*') cout << "Resultado: " << multiplicar(num1, num2) << endl;
        else if (operacion == '/') cout << "Resultado: " << dividir(num1, num2) << endl;
        else cout << "Operador no valido." << endl;

        cout << "Quieres hacer otra operacion(s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "Gracias por usarla regrese pronto :)" << endl;
    return 0;
}

