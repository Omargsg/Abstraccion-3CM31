#include "operaciones.h"

void capturarNumeros(Numeros &n) {
    cout << "Ingrese " << n.cantidad << " numeros:" << endl;
    for (int i = 0; i < n.cantidad; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> *(n.valores + i); 
    }
}

void calcularDatos(Numeros &n) {
    n.suma = 0;
    n.maximo = *(n.valores);
    n.minimo = *(n.valores);

    for (int i = 0; i < n.cantidad; i++) {
        float valor = *(n.valores + i);
        n.suma += valor;
        if (valor > n.maximo) n.maximo = valor;
        if (valor < n.minimo) n.minimo = valor;
    }
    n.promedio = n.suma / n.cantidad;
}

void mostrarResultados(Numeros n) {
    cout << "\nRESULTADOS" << endl;
    cout << "Suma: " << n.suma << endl;
    cout << "Promedio: " << n.promedio << endl;
    cout << "Máximo: " << n.maximo << endl;
    cout << "Mínimo: " << n.minimo << endl;
}

int main() {
    Numeros n1; // crea el objeto con 5 elementos

    capturarNumeros(n1);
    calcularDatos(n1);
    mostrarResultados(n1);

    cout << "\nFIN DEL PROGRAMA" << endl;
    return 0;
}

