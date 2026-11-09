#include <iostream>
using namespace std;

// Funcion que recibe dos numeros y devuelve su suma
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    int resultado = sumar(num1, num2);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}

