#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    Persona(string n = "", int e = 0) {
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

    void quickEnteros(int arr[], int bajo, int alto) {
        if (bajo < alto) {
            int pi = particionEnteros(arr, bajo, alto);
            quickEnteros(arr, bajo, pi - 1);
            quickEnteros(arr, pi + 1, alto);
        }
    }

    void quickCaracteres(char arr[], int bajo, int alto) {
        if (bajo < alto) {
            int pi = particionCaracteres(arr, bajo, alto);
            quickCaracteres(arr, bajo, pi - 1);
            quickCaracteres(arr, pi + 1, alto);
        }
    }

    void quickPersonas(Persona arr[], int bajo, int alto) {
        if (bajo < alto) {
            int pi = particionPersonas(arr, bajo, alto);
            quickPersonas(arr, bajo, pi - 1);
            quickPersonas(arr, pi + 1, alto);
        }
    }

    void mostrarEnteros(int arr[], int n) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void mostrarCaracteres(char arr[], int n) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void mostrarPersonas(Persona arr[], int n) {
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

    int particionPersonas(Persona arr[], int bajo, int alto) {
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

    int numeros[] = {8, 2, 10, 4, 6};
    char letras[] = {'x', 'b', 'z', 'a', 'm'};
    Persona personas[] = {{"Pedro", 28}, {"Lucia", 19}, {"Carlos", 33}, {"Elena", 25}};

    cout << "\nEnteros:\n";
    ord.quickEnteros(numeros, 0, 4);
    ord.mostrarEnteros(numeros, 5);

    cout << "\nCaracteres:\n";
    ord.quickCaracteres(letras, 0, 4);
    ord.mostrarCaracteres(letras, 5);

    cout << "\nPersonas (por edad):\n";
    ord.quickPersonas(personas, 0, 3);
    ord.mostrarPersonas(personas, 4);

    return 0;
}

