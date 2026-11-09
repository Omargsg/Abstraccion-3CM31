#include "operaciones.h"

void capturarNumeros(Numeros &n) {
    cout << "Ingrese 5 numeros:" << endl;
    cout << "Numero 1: "; cin >> n.n1;
    cout << "Numero 2: "; cin >> n.n2;
    cout << "Numero 3: "; cin >> n.n3;
    cout << "Numero 4: "; cin >> n.n4;
    cout << "Numero 5: "; cin >> n.n5;
}

void calcularDatos(Numeros &n) {
    n.suma = n.n1 + n.n2 + n.n3 + n.n4 + n.n5;
    n.promedio = n.suma / 5;

    //Maximo
    n.maximo = n.n1;
    if (n.n2 > n.maximo) n.maximo = n.n2;
    if (n.n3 > n.maximo) n.maximo = n.n3;
    if (n.n4 > n.maximo) n.maximo = n.n4;
    if (n.n5 > n.maximo) n.maximo = n.n5;

    //Minimo
    n.minimo = n.n1;
    if (n.n2 < n.minimo) n.minimo = n.n2;
    if (n.n3 < n.minimo) n.minimo = n.n3;
    if (n.n4 < n.minimo) n.minimo = n.n4;
    if (n.n5 < n.minimo) n.minimo = n.n5;
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

