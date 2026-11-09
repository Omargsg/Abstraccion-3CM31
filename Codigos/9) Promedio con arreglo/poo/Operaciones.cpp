#include <iostream>
using namespace std;

class Numeros {
private:
    float valores[5];
    float suma;
    float promedio;
    float maximo;
    float minimo;

public:
    Numeros() {
        suma = promedio = maximo = minimo = 0;
        cout << "[Constructor Numeros] Objeto creado." << endl;
    }

    ~Numeros() {
        cout << "[Destructor Numeros] Objeto destruido." << endl;
    }

    void capturar() {
        cout << "Ingrese 5 numeros:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Numero " << i + 1 << ": ";
            cin >> valores[i];
        }
    }

    void calcular() {
        suma = 0;
        maximo = valores[0];
        minimo = valores[0];

        for (int i = 0; i < 5; i++) {
            suma += valores[i];
            if (valores[i] > maximo)
                maximo = valores[i];
            if (valores[i] < minimo)
                minimo = valores[i];
        }

        promedio = suma / 5;
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
    Numeros n1;

    n1.capturar();
    n1.calcular();
    n1.mostrar();

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

