#include <iostream>
using namespace std;

class Numeros {
private:
    float *valores;
    int cantidad;
    float suma, promedio, maximo, minimo;

public:
    Numeros(int n = 5) {
        cantidad = n;
        valores = new float[cantidad]; // memoria dinámica
        suma = promedio = maximo = minimo = 0;
        cout << "[Constructor Numeros] Se han reservado " 
		<< cantidad << " espacios." << endl;
    }

    ~Numeros() {
        delete[] valores; // liberar memoria
        cout << "[Destructor Numeros] Memoria liberada." << endl;
    }

    void capturar() {
        cout << "Ingrese " << cantidad << " numeros:" << endl;
        for (int i = 0; i < cantidad; i++) {
            cout << "Numero " << i + 1 << ": ";
            cin >> *(valores + i);
        }
    }

    void calcular() {
        suma = 0;
        maximo = *valores;
        minimo = *valores;

        for (int i = 0; i < cantidad; i++) {
            float valor = *(valores + i);
            suma += valor;
            if (valor > maximo) maximo = valor;
            if (valor < minimo) minimo = valor;
        }
        promedio = suma / cantidad;
    }

    void mostrar() {
        cout << "\nRESULTADOS" << endl;
        cout << "Suma: " << suma << endl;
        cout << "Promedio: " << promedio << endl;
        cout << "Máximo: " << maximo << endl;
        cout << "Mínimo: " << minimo << endl;
    }
};

int main() {
    Numeros n1; // se crea el objeto

    n1.capturar();
    n1.calcular();
    n1.mostrar();

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

