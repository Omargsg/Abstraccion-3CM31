#ifndef LIBRERIABURBUJA_H
#define LIBRERIABURBUJA_H

#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

class Control {
public:
    Control() {
        cout << "\n[Constructor] Iniciando libreria de ordenamiento indirecto\n";
    }

    ~Control() {
        cout << "\n[Destructor] Finalizando libreria de ordenamiento indirecto\n";
    }
};

void ordenarEnteros(int *arr, int n) {
    int *indice = new int[n];
    for (int i = 0; i < n; i++)
        indice[i] = i;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + indice[j]) > *(arr + indice[j + 1])) {
                int temp = indice[j];
                indice[j] = indice[j + 1];
                indice[j + 1] = temp;
            }
        }
    }

    cout << "\nEnteros ordenados: ";
    for (int i = 0; i < n; i++)
        cout << *(arr + indice[i]) << " ";

    delete[] indice;
}

void ordenarCaracteres(char *arr, int n) {
    int *indice = new int[n];
    for (int i = 0; i < n; i++)
        indice[i] = i;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + indice[j]) > *(arr + indice[j + 1])) {
                int temp = indice[j];
                indice[j] = indice[j + 1];
                indice[j + 1] = temp;
            }
        }
    }

    cout << "\nCaracteres ordenados: ";
    for (int i = 0; i < n; i++)
        cout << *(arr + indice[i]) << " ";

    delete[] indice;
}

void ordenarPersonas(Persona *arr, int n) {
    int *indice = new int[n];
    for (int i = 0; i < n; i++)
        indice[i] = i;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((arr + indice[j])->edad > (arr + indice[j + 1])->edad) {
                int temp = indice[j];
                indice[j] = indice[j + 1];
                indice[j + 1] = temp;
            }
        }
    }

    cout << "\nPersonas ordenadas por edad:\n";
    for (int i = 0; i < n; i++)
        cout << (arr + indice[i])->nombre << " (" << (arr + indice[i])->edad << " anios)\n";

    delete[] indice;
}

#endif

