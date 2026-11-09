#include "LibreriaQuick1.h"

Ordenamiento::Ordenamiento() {
    cout << "\nConstructor: Objeto de ordenamiento creado.\n";
}

Ordenamiento::~Ordenamiento() {
    cout << "\nDestructor: Objeto de ordenamiento destruido.\n";
}

//Enteros
int Ordenamiento::particionEnteros(int arr[], int bajo, int alto) {
    int pivote = arr[alto];
    int i = bajo - 1;
    for (int j = bajo; j < alto; j++) {
        if (arr[j] < pivote) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[alto]);
    return i + 1;
}

void Ordenamiento::quickEnteros(int arr[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particionEnteros(arr, bajo, alto);
        quickEnteros(arr, bajo, pi - 1);
        quickEnteros(arr, pi + 1, alto);
    }
}

//Caracter
int Ordenamiento::particionCaracteres(char arr[], int bajo, int alto) {
    char pivote = arr[alto];
    int i = bajo - 1;
    for (int j = bajo; j < alto; j++) {
        if (arr[j] < pivote) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[alto]);
    return i + 1;
}

void Ordenamiento::quickCaracteres(char arr[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particionCaracteres(arr, bajo, alto);
        quickCaracteres(arr, bajo, pi - 1);
        quickCaracteres(arr, pi + 1, alto);
    }
}

//Mascota
int Ordenamiento::particionMascotas(Mascota arr[], int bajo, int alto) {
    int pivote = arr[alto].edad;
    int i = bajo - 1;
    for (int j = bajo; j < alto; j++) {
        if (arr[j].edad < pivote) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[alto]);
    return i + 1;
}

void Ordenamiento::quickMascotas(Mascota arr[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particionMascotas(arr, bajo, alto);
        quickMascotas(arr, bajo, pi - 1);
        quickMascotas(arr, pi + 1, alto);
    }
}

void Ordenamiento::mostrarEnteros(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void Ordenamiento::mostrarCaracteres(char arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void Ordenamiento::mostrarMascotas(Mascota arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i].nombre << " (" << arr[i].edad << " anios)\n";
}

int main() {
    Ordenamiento ord;

    int numeros[] = {1, 0, 754, 115, 504};
    char letras[] = {'b', 'a', 'm', 'c', 'x'};
    Mascota mascotas[] = {{"Tonio", 5}, {"Lucas", 1}, {"Chinita", 3}, {"Sasha", 2}};

    cout << "\nEnteros:\n";
    ord.quickEnteros(numeros, 0, 4);
    ord.mostrarEnteros(numeros, 5);

    cout << "\nCaracteres:\n";
    ord.quickCaracteres(letras, 0, 4);
    ord.mostrarCaracteres(letras, 5);

    cout << "\nPersonas (por edad):\n";
    ord.quickMascotas(mascotas, 0, 3);
    ord.mostrarMascotas(mascotas, 4);

    return 0;
}

