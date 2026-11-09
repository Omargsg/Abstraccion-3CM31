#include "operaciones.h"

void capturarNumeros(Numeros &n) {
    cout << "Ingrese 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> n.valores[i];
    }
}

void calcularDatos(Numeros &n) {
    n.suma = 0;
    n.maximo = n.valores[0];
    n.minimo = n.valores[0];

    for (int i = 0; i < 5; i++) {
        n.suma += n.valores[i];
        if (n.valores[i] > n.maximo)
            n.maximo = n.valores[i];
        if (n.valores[i] < n.minimo)
            n.minimo = n.valores[i];
    }
    n.promedio = n.suma / 5;
}

void mostrarResultados(Numeros n) {
    cout << "\nRESULTADOS" << endl;
    cout << "Suma: " << n.suma << endl;
    cout << "Promedio: " << n.promedio << endl;
    cout << "Máximo: " << n.maximo << endl;
    cout << "Mínimo: " << n.minimo << endl;
}

int main() {
    Numeros n1;

    capturarNumeros(n1);
    calcularDatos(n1);
    mostrarResultados(n1);

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

