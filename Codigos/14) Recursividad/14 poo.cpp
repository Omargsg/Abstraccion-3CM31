#include <iostream>
using namespace std;

// Clase Calculadora
class Calculadora {
public:
    
    int multiplicar(int a, int b) {
        if(b == 0) return 0;
        return a + multiplicar(a, b - 1);
    }


    int potencia(int base, int exponente) {
        if(exponente == 0) return 1;
        return base * potencia(base, exponente - 1);
    }

    
    double dividir(double dividendo, double divisor) {
        if(divisor == 0) return -1; 
        if(dividendo < divisor) return 0;
        return 1 + dividir(dividendo - divisor, divisor);
    }

 
    long long factorial(int n) {
        if(n <= 1) return 1;
        return n * factorial(n - 1);
    }

    
    long long fibonacci(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};

int main() {
    Calculadora calc;
    int opcion;

    do {
        cout << "\n Calculadora POO \n";
        cout << "1. Multiplicacion\n2. Potencia\n3. Division\n4. Factorial\n5. Fibonacci\n6. Salir\n";
        cout << "Opcion: "; cin >> opcion;

        if(opcion == 1) {
            int a, b;
            cout << "Ingresa dos numeros: "; cin >> a >> b;
            cout << "Resultado: " << calc.multiplicar(a, b) << endl;
        } else if(opcion == 2) {
            int base, exp;
            cout << "Ingresa base y exponente: "; cin >> base >> exp;
            cout << "Resultado: " << calc.potencia(base, exp) << endl;
        } else if(opcion == 3) {
            double d, v;
            cout << "Ingresa dividendo y divisor: "; cin >> d >> v;
            double res = calc.dividir(d, v);
            if(res == -1) cout << "Error: division por cero\n";
            else cout << "Resultado: " << res << endl;
        } else if(opcion == 4) {
            int n;
            cout << "Ingresa un numero: "; cin >> n;
            cout << "Factorial: " << calc.factorial(n) << endl;
        } else if(opcion == 5) {
            int n;
            cout << "Ingresa posicion Fibonacci: "; cin >> n;
            cout << "Fibonacci: " << calc.fibonacci(n) << endl;
        }

    } while(opcion != 6);

    cout << "Programa terminado.\n";
    return 0;
}

