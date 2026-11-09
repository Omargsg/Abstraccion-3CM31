#ifndef LIBRERIAMERGE1_H
#define LIBRERIAMERGE1_H

#include <iostream>
#include <string>
using namespace std;

struct Tortuga {
    string nombre;
    int edad;
};

class Control {
public:
    Control() {
        cout << "\n[Constructor] Iniciando libreria de Merge Sort indirecto\n";
    }
    ~Control() {
        cout << "\n[Destructor] Finalizando libreria de Merge Sort indirecto\n";
    }
};

void mergeIndices(int *indice, int *temp, int izquierda, int medio, int derecha, int *arr) {
    int i = izquierda, j = medio + 1, k = izquierda;
    while (i <= medio && j <= derecha) {
        if (*(arr + indice[i]) <= *(arr + indice[j]))
            temp[k++] = indice[i++];
        else
            temp[k++] = indice[j++];
    }
    while (i <= medio) temp[k++] = indice[i++];
    while (j <= derecha) temp[k++] = indice[j++];
    for (int t = izquierda; t <= derecha; t++) indice[t] = temp[t];
}

void mergeSortEnteros(int *arr, int *indice, int *temp, int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = (izquierda + derecha) / 2;
        mergeSortEnteros(arr, indice, temp, izquierda, medio);
        mergeSortEnteros(arr, indice, temp, medio + 1, derecha);
        mergeIndices(indice, temp, izquierda, medio, derecha, arr);
    }
}

void ordenarEnteros(int *arr, int n) {
    int *indice = new int[n];
    int *temp = new int[n];
    for (int i = 0; i < n; i++) indice[i] = i;
    mergeSortEnteros(arr, indice, temp, 0, n - 1);

    cout << "\nEnteros ordenados:\n ";
    for (int i = 0; i < n; i++)
        cout << *(arr + indice[i]) << " ";

    delete[] indice;
    delete[] temp;
}

void mergeIndicesChar(int *indice, int *temp, int izquierda, int medio, int derecha, char *arr) {
    int i = izquierda, j = medio + 1, k = izquierda;
    while (i <= medio && j <= derecha) {
        if (*(arr + indice[i]) <= *(arr + indice[j]))
            temp[k++] = indice[i++];
        else
            temp[k++] = indice[j++];
    }
    while (i <= medio) temp[k++] = indice[i++];
    while (j <= derecha) temp[k++] = indice[j++];
    for (int t = izquierda; t <= derecha; t++) indice[t] = temp[t];
}

void mergeSortCaracteres(char *arr, int *indice, int *temp, int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = (izquierda + derecha) / 2;
        mergeSortCaracteres(arr, indice, temp, izquierda, medio);
        mergeSortCaracteres(arr, indice, temp, medio + 1, derecha);
        mergeIndicesChar(indice, temp, izquierda, medio, derecha, arr);
    }
}

void ordenarCaracteres(char *arr, int n) {
    int *indice = new int[n];
    int *temp = new int[n];
    for (int i = 0; i < n; i++) indice[i] = i;
    mergeSortCaracteres(arr, indice, temp, 0, n - 1);

    cout << "\nCaracteres ordenados:\n ";
    for (int i = 0; i < n; i++)
        cout << *(arr + indice[i]) << " ";

    delete[] indice;
    delete[] temp;
}

void mergeIndicesTortugas(int *indice, int *temp, int izquierda, int medio, int derecha, Tortuga *arr) {
    int i = izquierda, j = medio + 1, k = izquierda;
    while (i <= medio && j <= derecha) {
        if ((arr + indice[i])->edad <= (arr + indice[j])->edad)
            temp[k++] = indice[i++];
        else
            temp[k++] = indice[j++];
    }
    while (i <= medio) temp[k++] = indice[i++];
    while (j <= derecha) temp[k++] = indice[j++];
    for (int t = izquierda; t <= derecha; t++) indice[t] = temp[t];
}

void mergeSortTortugas(Tortuga *arr, int *indice, int *temp, int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = (izquierda + derecha) / 2;
        mergeSortTortugas(arr, indice, temp, izquierda, medio);
        mergeSortTortugas(arr, indice, temp, medio + 1, derecha);
        mergeIndicesTortugas(indice, temp, izquierda, medio, derecha, arr);
    }
}

void ordenarTortugas(Tortuga *arr, int n) {
    int *indice = new int[n];
    int *temp = new int[n];
    for (int i = 0; i < n; i++) indice[i] = i;
    mergeSortTortugas(arr, indice, temp, 0, n - 1);

    cout << "\nTortugas ordenadas por edad:\n";
    for (int i = 0; i < n; i++)
        cout << (arr + indice[i])->nombre << " (" << (arr + indice[i])->edad << " anios)\n";

    delete[] indice;
    delete[] temp;
}

#endif

