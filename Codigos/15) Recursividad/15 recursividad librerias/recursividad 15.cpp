#include <iostream>
#include "calculadora.h"
using namespace std;

int main() {
    int opcion;
    do {
        cout << "\n Calculadora con Librerias\n";
        cout << "1. Multiplicacion\n2. Potencia\n3. Division\n4. Factorial\n5. Fibonacci\n";
        cout << "6. Triangulos Sierpinski\n7. Triangulos Polvo de Cantor\n8. Salir\n";
        cout << "Opcion: "; cin >> opcion;

        if(opcion == 1) {
            int a,b; cout << "Ingresa dos numeros: "; cin >> a >> b;
            cout << "Resultado: " << multiplicar(a,b) << endl;
        } else if(opcion == 2) {
            int b,e; cout << "Ingresa base y exponente: "; cin >> b >> e;
            cout << "Resultado: " << potencia(b,e) << endl;
        } else if(opcion == 3) {
            double d,v; cout << "Ingresa dividendo y divisor: "; cin >> d >> v;
            double res = dividir(d,v);
            if(res==-1) cout << "Error: division por cero\n";
            else cout << "Resultado: " << res << endl;
        } else if(opcion == 4) {
            int n; cout << "Ingresa un numero: "; cin >> n;
            cout << "Factorial: " << factorial(n) << endl;
        } else if(opcion == 5) {
            int n; cout << "Ingresa posicion Fibonacci: "; cin >> n;
            cout << "Fibonacci: " << fibonacci(n) << endl;
        } else if(opcion == 6) {
            int n; cout << "Ingresa nivel Sierpinski: "; cin >> n;
            cout << "Triangulos: " << sierpinski(n) << endl;
        } else if(opcion == 7) {
            int n; cout << "Ingresa nivel Polvo de Cantor: "; cin >> n;
            cout << "Triangulos: " << cantor(n) << endl;
        }

    } while(opcion != 8);

    cout << "Programa terminado.\n";
    return 0;
}

