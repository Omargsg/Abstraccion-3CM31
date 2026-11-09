#include <iostream>
using namespace std;

class Calculadora {
private:
    double num1, num2;

public:
    Calculadora(double a, double b) { num1 = a; num2 = b; }

    void sumar() { cout << "Resultado: " << num1 + num2 << endl; }
    void restar() { cout << "Resultado: " << num1 - num2 << endl; }
    void multiplicar() { cout << "Resultado: " << num1 * num2 << endl; }
    void dividir() {
        if (num2 != 0) cout << "Resultado: " << num1 / num2 << endl;
        else cout << "Error: Division entre cero no valido." << endl;
    }
};

int main() {
    double n1, n2;
    char operacion, opcion;

    do {
        cout << "Ingresa el primer numero: ";
        cin >> n1;
        cout << "Ingresa el operador (+, -, *, /): ";
        cin >> operacion;
        cout << "Ingresa el segundo numero: ";
        cin >> n2;

        Calculadora calc(n1, n2);

        if (operacion == '+') calc.sumar();
        else if (operacion == '-') calc.restar();
        else if (operacion == '*') calc.multiplicar();
        else if (operacion == '/') calc.dividir();
        else cout << "Operador no valido." << endl;

        cout << "Quieres hacer otra operacion (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "Gracias por usarla regrese pronto :)" << endl;
    return 0;
}

