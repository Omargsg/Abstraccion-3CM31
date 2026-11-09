#include <iostream>
using namespace std;

// Función que recibe dos numeros y muestra la suma
void suma(int a, int b) {
    int resultado = a + b;
    cout << "El resultado es: " << resultado << endl;
}

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    suma(num1, num2); // Llamada a la funcion

    return 0;
}

