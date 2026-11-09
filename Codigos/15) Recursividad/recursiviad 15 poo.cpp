#include <iostream>
using namespace std;

class Calculadora {
public:
    
    int multiplicar(int a, int b) {
        if(b == 0) return 0;
        return a + multiplicar(a, b - 1);
    }

    
    int potencia(int base, int exp) {
        if(exp == 0) return 1;
        return base * potencia(base, exp - 1);
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

    // Triangulos en Sierpinski
    int sierpinski(int n) {
        if(n == 0) return 1;
        return 3 * sierpinski(n - 1);
    }

    // Triangulos en polvo de Cantor
    int cantor(int n) {
        if(n == 0) return 1;
        return 2 * cantor(n - 1);
    }
};

int main() {
    Calculadora calc;
    int opcion;

    do {
        cout << "\n Calculadora \n";
        cout << "1. Multiplicacion\n2. Potencia\n3. Division\n4. Factorial\n5. Fibonacci\n";
        cout << "6. Triangulos Sierpinski\n7. Triangulos Polvo de Cantor\n8. Salir\n";
        cout << "Opcion: "; cin >> opcion;

        if(opcion == 1) {
            int a,b; cout << "Ingresa dos numeros: "; cin >> a >> b;
            cout << "Resultado: " << calc.multiplicar(a,b) << endl;
        } else if(opcion == 2) {
            int b,e; cout << "Ingresa base y exponente: "; cin >> b >> e;
            cout << "Resultado: " << calc.potencia(b,e) << endl;
        } else if(opcion == 3) {
            double d,v; cout << "Ingresa dividendo y divisor: "; cin >> d >> v;
            double res = calc.dividir(d,v);
            if(res==-1) cout << "Error: division por cero\n";
            else cout << "Resultado: " << res << endl;
        } else if(opcion == 4) {
            int n; cout << "Ingresa un numero: "; cin >> n;
            cout << "Factorial: " << calc.factorial(n) << endl;
        } else if(opcion == 5) {
            int n; cout << "Ingresa posicion Fibonacci: "; cin >> n;
            cout << "Fibonacci: " << calc.fibonacci(n) << endl;
        } else if(opcion == 6) {
            int n; cout << "Ingresa nivel Sierpinski: "; cin >> n;
            cout << "Triangulos: " << calc.sierpinski(n) << endl;
        } else if(opcion == 7) {
            int n; cout << "Ingresa nivel Polvo de Cantor: "; cin >> n;
            cout << "Triangulos: " << calc.cantor(n) << endl;
        }

    } while(opcion != 8);

    cout << "Programa terminado.\n";
    return 0;
}

