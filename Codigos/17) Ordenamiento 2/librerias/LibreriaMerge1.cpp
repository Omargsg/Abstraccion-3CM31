#include "LibreriaMerge1.h"

Ordenamiento::Ordenamiento() {
    cout << "\nConstructor: Objeto de ordenamiento creado.\n";
}

Ordenamiento::~Ordenamiento() {
    cout << "\nDestructor: Objeto de ordenamiento destruido.\n";
}

//ENTEROS
void Ordenamiento::mergeEnteros(int arr[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = (izquierda + derecha) / 2;
        mergeEnteros(arr, izquierda, medio);
        mergeEnteros(arr, medio + 1, derecha);
        mergeInt(arr, izquierda, medio, derecha);
    }
}

void Ordenamiento::mergeInt(int arr[], int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;
    int *L = new int[n1];
    int *R = new int[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[izquierda + i];
    for (int j = 0; j < n2; j++) R[j] = arr[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

//CARACTERES
void Ordenamiento::mergeCaracteres(char arr[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = (izquierda + derecha) / 2;
        mergeCaracteres(arr, izquierda, medio);
        mergeCaracteres(arr, medio + 1, derecha);
        mergeChar(arr, izquierda, medio, derecha);
    }
}

void Ordenamiento::mergeChar(char arr[], int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;
    char *L = new char[n1];
    char *R = new char[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[izquierda + i];
    for (int j = 0; j < n2; j++) R[j] = arr[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

//Perro
void Ordenamiento::mergePerros(Perro arr[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = (izquierda + derecha) / 2;
        mergePerros(arr, izquierda, medio);
        mergePerros(arr, medio + 1, derecha);
        mergePerr(arr, izquierda, medio, derecha);
    }
}

void Ordenamiento::mergePerr(Perro arr[], int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;
    Perro *L = new Perro[n1];
    Perro *R = new Perro[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[izquierda + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;
    while (i < n1 && j < n2)
        arr[k++] = (L[i].edad <= R[j].edad) ? L[i++] : R[j++];
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void Ordenamiento::mostrarEnteros(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void Ordenamiento::mostrarCaracteres(char arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void Ordenamiento::mostrarPerros(Perro arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i].nombre << " (" << arr[i].edad << " anios)\n";
}

int main() {
    Ordenamiento ord;

    int numeros[] = {18, 5, 91, 100, 45};
    char letras[] = {'z', 'a', 'r'};
    Perro perros[] = {{"Pumpy", 2}, {"Pufy", 1}, {"Coco", 3}, {"Galleta", 4}};

    cout << "\nORDENAMIENTO MERGE SORT DE ENTEROS\n";
    ord.mergeEnteros(numeros, 0, 4);
    ord.mostrarEnteros(numeros, 5);

    cout << "\nORDENAMIENTO MERGE SORT DE CARACTERES\n";
    ord.mergeCaracteres(letras, 0, 2);
    ord.mostrarCaracteres(letras, 3);

    cout << "\nORDENAMIENTO MERGE SORT DE PERROS (por edad)\n";
    ord.mergePerros(perros, 0, 3);
    ord.mostrarPerros(perros, 4);

    return 0;
}

