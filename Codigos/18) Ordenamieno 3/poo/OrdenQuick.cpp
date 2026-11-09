#include <iostream>
#include <string>
using namespace std;

class Perro {
public:
    string nombre;
    int edad;

    Perro(string n = "", int e = 0) {
        nombre = n;
        edad = e;
    }
};

class Ordenamiento {
public:
    Ordenamiento() {
        cout << "\nConstructor: Objeto de ordenamiento creado.\n";
    }

    ~Ordenamiento() {
        cout << "\nDestructor: Objeto de ordenamiento destruido.\n";
    }

    void quickSortEnteros(int arr[], int bajo, int alto) {
        if (bajo < alto) {
            int pi = particionEnteros(arr, bajo, alto);
            quickSortEnteros(arr, bajo, pi - 1);
            quickSortEnteros(arr, pi + 1, alto);
        }
    }

    void quickSortCaracteres(char arr[], int bajo, int alto) {
        if (bajo < alto) {
            int pi = particionCaracteres(arr, bajo, alto);
            quickSortCaracteres(arr, bajo, pi - 1);
            quickSortCaracteres(arr, pi + 1, alto);
        }
    }

    void quickSortPerros(Perro arr[], int bajo, int alto) {
        if (bajo < alto) {
            int pi = particionPerros(arr, bajo, alto);
            quickSortPerros(arr, bajo, pi - 1);
            quickSortPerros(arr, pi + 1, alto);
        }
    }

    void mostrarEnteros(int arr[], int n) {
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }

    void mostrarCaracteres(char arr[], int n) {
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }

    void mostrarPerros(Perro arr[], int n) {
        for (int i = 0; i < n; i++)
            cout << arr[i].nombre << " (" << arr[i].edad << " anios)\n";
    }

private:
    int particionEnteros(int arr[], int bajo, int alto) {
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

    int particionCaracteres(char arr[], int bajo, int alto) {
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

    int particionPerros(Perro arr[], int bajo, int alto) {
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
};

int main() {
    Ordenamiento ord;

    int numeros[] = {10, 3, 7, 1, 5};
    char letras[] = {'k', 'a', 'f', 'b', 'z'};
    Perro perros[] = {{"Luna", 5}, {"Toby", 2}, {"Rocky", 8}, {"Simba", 4}};

    cout << "\nEnteros:\n";
    ord.quickSortEnteros(numeros, 0, 4);
    ord.mostrarEnteros(numeros, 5);

    cout << "\nCaracteres:\n";
    ord.quickSortCaracteres(letras, 0, 4);
    ord.mostrarCaracteres(letras, 5);

    cout << "\nPerros (por edad):\n";
    ord.quickSortPerros(perros, 0, 3);
    ord.mostrarPerros(perros, 4);

    return 0;
}

