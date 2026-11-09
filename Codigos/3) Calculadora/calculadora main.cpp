#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operacion;
    char opcion;

    do {
        cout << "Ingresa el primer numero: ";
        cin >> num1;
        cout << "Ingresa el operador (+, -, *, /): ";
        cin >> operacion;
        cout << "Ingresa el segundo numero: ";
        cin >> num2;

        if (operacion == '+') cout << "Resultado: " << num1 + num2 << endl;
        else if (operacion == '-') cout << "Resultado: " << num1 - num2 << endl;
        else if (operacion == '*') cout << "Resultado: " << num1 * num2 << endl;
        else if (operacion == '/') {
            if (num2 != 0) cout << "Resultado: " << num1 / num2 << endl;
            else cout << "Error: Divisiin entre cero no valida." << endl;
        } else cout << "Operador no valido." << endl;

        cout << "Quieres hacer otra operacion (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "Gracias por usarla regrese pronto :)" << endl;
    return 0;
}


