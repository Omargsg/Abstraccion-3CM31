#include <iostream>
#include <string>
using namespace std;

class Gato {
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

	//Enteros
    void mergeEnteros(int arr[], int izquierda, int derecha) {
        if (izquierda < derecha) {
            int medio = (izquierda + derecha) / 2;
            mergeEnteros(arr, izquierda, medio);
            mergeEnteros(arr, medio + 1, derecha);
            mergeInt(arr, izquierda, medio, derecha);
        }
    }

    //Caracter
    void mergeCaracteres(char arr[], int izquierda, int derecha) {
        if (izquierda < derecha) {
            int medio = (izquierda + derecha) / 2;
            mergeCaracteres(arr, izquierda, medio);
            mergeCaracteres(arr, medio + 1, derecha);
            mergeChar(arr, izquierda, medio, derecha);
        }
    }

    //Persona
    void mergeGatos(Gato arr[], int izquierda, int derecha) {
        if (izquierda < derecha) {
            int medio = (izquierda + derecha) / 2;
            mergeGatos(arr, izquierda, medio);
            mergeGatos(arr, medio + 1, derecha);
            mergeCat(arr, izquierda, medio, derecha);
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

    void mostrarGatos(Gato arr[], int n) {
        for (int i = 0; i < n; i++)
            cout << arr[i].nombre << " (" << arr[i].edad << " anios)\n";
    }

private:
    void mergeInt(int arr[], int izquierda, int medio, int derecha) {
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

    void mergeChar(char arr[], int izquierda, int medio, int derecha) {
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

    void mergeCat(Gato arr[], int izquierda, int medio, int derecha) {
        int n1 = medio - izquierda + 1;
        int n2 = derecha - medio;
        Gato *L = new Gato[n1];
        Gato *R = new Gato[n2];

        for (int i = 0; i < n1; i++) L[i] = arr[izquierda + i];
        for (int j = 0; j < n2; j++) R[j] = arr[medio + 1 + j];

        int i = 0, j = 0, k = izquierda;
        while (i < n1 && j < n2)
            arr[k++] = (L[i].edad <= R[j].edad) ? L[i++] : R[j++];
        while (i < n1) arr[k++] = L[i++];
        while (j < n2) arr[k++] = R[j++];

        delete[] L;
        delete[] R;
    }
};

int main() {
    Ordenamiento ord;

    int numeros[] = {99, 22, 55, 102, 87};
    char letras[] = {'w', 'x', 'n', 'y', 'a'};
    Gato gatos[] = {{"Chenchomiau", 5}, {"Michi", 8}, {"Canela", 3}};

    cout << "\nORDENAMIENTO MERGE SORT DE ENTEROS\n";
    ord.mergeEnteros(numeros, 0, 4);
    ord.mostrarEnteros(numeros, 5);

    cout << "\nORDENAMIENTO MERGE SORT DE CARACTERES\n";
    ord.mergeCaracteres(letras, 0, 4);
    ord.mostrarCaracteres(letras, 5);

    cout << "\nORDENAMIENTO MERGE SORT DE PERSONAS (por edad)\n";
    ord.mergeGatos(gatos, 0, 2);
    ord.mostrarGatos(gatos, 3);

    return 0;
}

