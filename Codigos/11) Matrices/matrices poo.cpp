#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Matriz {
public:
    int filas, columnas;
    int datos[10][10]; /

 
    Matriz(int f, int c) {
        filas = f;
        columnas = c;
    }

   
    void generarAleatorios() {
        for(int i = 0; i < filas; i++) {
            for(int j = 0; j < columnas; j++) {
                datos[i][j] = rand() % 10;
            }
        }
    }


    void mostrar() {
        for(int i = 0; i < filas; i++) {
            for(int j = 0; j < columnas; j++) {
                cout << datos[i][j] << "\t";
            }
            cout << endl;
        }
    }


    void multiplicarPorConstante(int k) {
        for(int i = 0; i < filas; i++) {
            for(int j = 0; j < columnas; j++) {
                datos[i][j] *= k;
            }
        }
    }


    Matriz multiplicar(Matriz B) {
        Matriz resultado(filas, B.columnas);

        for(int i = 0; i < filas; i++) {
            for(int j = 0; j < B.columnas; j++) {
                resultado.datos[i][j] = 0;
                for(int k = 0; k < columnas; k++) {
                    resultado.datos[i][j] += datos[i][k] * B.datos[k][j];
                }
            }
        }

        return resultado;
    }
};

int main() {
    srand(time(0));

    int filasA, colA, filasB, colB;
    cout << "Filas de A: "; cin >> filasA;
    cout << "Columnas de A: "; cin >> colA;
    cout << "Filas de B: "; cin >> filasB;
    cout << "Columnas de B: "; cin >> colB;

    if(colA != filasB) {
        cout << "Error: columnas de A deben ser iguales a filas de B para multiplicar.\n";
        return 0;
    }

    Matriz A(filasA, colA);
    Matriz B(filasB, colB);

    A.generarAleatorios();
    B.generarAleatorios();

    cout << "\nMatriz A:\n";
    A.mostrar();
    cout << "\nMatriz B:\n";
    B.mostrar();

    int constante;
    cout << "\nMultiplicar A por constante: ";
    cin >> constante;
    A.multiplicarPorConstante(constante);
    cout << "A * " << constante << ":\n";
    A.mostrar();

    Matriz AB = A.multiplicar(B);
    cout << "\nA * B:\n";
    AB.mostrar();

    return 0;
}

