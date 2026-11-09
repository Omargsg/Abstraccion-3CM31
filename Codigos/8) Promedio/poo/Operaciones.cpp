#include <iostream>
using namespace std;

class Numeros {
private:
    float n1, n2, n3, n4, n5;
    float suma, promedio, maximo, minimo;

public:
    Numeros() {
        n1 = n2 = n3 = n4 = n5 = 0;
        suma = promedio = maximo = minimo = 0;
        cout << "[Constructor Numeros] Objeto creado." << endl;
    }

    ~Numeros() {
        cout << "[Destructor Numeros] Objeto destruido." << endl;
    }

    void capturar() {
        cout << "Ingrese 5 numeros:" << endl;
        cout << "Numero 1: "; cin >> n1;
        cout << "Numero 2: "; cin >> n2;
        cout << "Numero 3: "; cin >> n3;
        cout << "Numero 4: "; cin >> n4;
        cout << "Numero 5: "; cin >> n5;
    }

    void calcular() {
        suma = n1 + n2 + n3 + n4 + n5;
        promedio = suma / 5;

        // Maximo
        maximo = n1;
        if (n2 > maximo) maximo = n2;
        if (n3 > maximo) maximo = n3;
        if (n4 > maximo) maximo = n4;
        if (n5 > maximo) maximo = n5;

        //Minimo
        minimo = n1;
        if (n2 < minimo) minimo = n2;
        if (n3 < minimo) minimo = n3;
        if (n4 < minimo) minimo = n4;
        if (n5 < minimo) minimo = n5;
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

