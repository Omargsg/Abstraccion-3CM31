#include <iostream>
#include "operaciones.h"
using namespace std;

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

        cout << "Quieres hacer otra operacion (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "Gracias por usarla vuelva pronto :)" << endl;
    return 0;
}

