#include "LibreriaOrdenamiento1.h"

Ordenamiento::Ordenamiento() {
    cout << "\nConstructor: Objeto de ordenamiento creado.\n";
}

Ordenamiento::~Ordenamiento() {
    cout << "\nDestructor: Objeto de ordenamiento destruido.\n";
}

//Entero
void Ordenamiento::burbujaEnteros(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

//Caracter
void Ordenamiento::burbujaCaracteres(char arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

//Mascota(edad)
void Ordenamiento::burbujaMascotas(Mascota arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j].edad > arr[j + 1].edad)
                swap(arr[j], arr[j + 1]);
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
        cout << arr[i].raza << " (" << arr[i].edad << " anios)\n";
}

int main() {
    Ordenamiento ord;

    int numeros[] = {8, 3, 9, 1};
    char letras[] = {'z', 'x', 'y', 'w', 'o', 'n'};
    Mascota raza[] = {{"Gato", 2}, {"Perro", 1}, {"Perico", 3}};

    cout << "\nORDENAMIENTO DE ENTEROS\n";
    ord.burbujaEnteros(numeros, 4);
    ord.mostrarEnteros(numeros, 4);

    cout << "\nORDENAMIENTO DE CARACTERES\n";
    ord.burbujaCaracteres(letras, 6);
    ord.mostrarCaracteres(letras, 6);

    cout << "\nORDENAMIENTO DE MASCOTAS (por edad)\n";
    ord.burbujaMascotas(raza, 3);
    ord.mostrarMascotas(raza, 3);

    return 0;
}

