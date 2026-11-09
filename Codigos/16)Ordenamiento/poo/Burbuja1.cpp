#include <iostream>
#include <string>
using namespace std;

class Mascota {
public:
    string tipo;
    int edad;

    Mascota(string n = "", int e = 0) {
        tipo = n;
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

    void burbujaEnteros(int arr[], int n) {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
    }

    void burbujaCaracteres(char arr[], int n) {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
    }

    void burbujaMascotas(Mascota arr[], int n) {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (arr[j].edad > arr[j + 1].edad)
                    swap(arr[j], arr[j + 1]);
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

    void mostrarMascotas(Mascota arr[], int n) {
        for (int i = 0; i < n; i++)
            cout << arr[i].tipo << " (" << arr[i].edad << " anios)\n";
    }
};

int main() {
    Ordenamiento ord;

    int numeros[] = {8, 3, 9, 1, 4, 10, 164};
    char letras[] = {'z', 'y', 'n', 'b'};
    Mascota mascotas[] = {{"Perro", 2}, {"Tortuga", 19}, {"Gato", 3}};

    cout << "\nORDENAMIENTO DE ENTEROS\n";
    ord.burbujaEnteros(numeros, 7);
    ord.mostrarEnteros(numeros, 7);

    cout << "\nORDENAMIENTO DE CARACTERES\n";
    ord.burbujaCaracteres(letras, 4);
    ord.mostrarCaracteres(letras, 4);

    cout << "\nORDENAMIENTO DE PERSONAS (por edad)\n";
    ord.burbujaMascotas(mascotas, 3);
    ord.mostrarMascotas(mascotas, 3);

    return 0;
}

