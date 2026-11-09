#include "LibreriaOrdenamiento.h"

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

//Persona(edad)
void Ordenamiento::burbujaPersonas(Persona arr[], int n) {
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

void Ordenamiento::mostrarPersonas(Persona arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i].nombre << " (" << arr[i].edad << " anios)\n";
}

int main() {
    Ordenamiento ord;

    int numeros[] = {8, 3, 9, 1, 4};
    char letras[] = {'z', 'a', 'r', 'b', 'm'};
    Persona personas[] = {{"Ana", 25}, {"Luis", 19}, {"Carlos", 30}};

    cout << "\nORDENAMIENTO DE ENTEROS\n";
    ord.burbujaEnteros(numeros, 5);
    ord.mostrarEnteros(numeros, 5);

    cout << "\nORDENAMIENTO DE CARACTERES\n";
    ord.burbujaCaracteres(letras, 5);
    ord.mostrarCaracteres(letras, 5);

    cout << "\nORDENAMIENTO DE PERSONAS (por edad)\n";
    ord.burbujaPersonas(personas, 3);
    ord.mostrarPersonas(personas, 3);

    return 0;
}

