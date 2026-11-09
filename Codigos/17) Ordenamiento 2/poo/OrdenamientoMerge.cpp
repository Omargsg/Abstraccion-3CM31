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
    void mergePersonas(Persona arr[], int izquierda, int derecha) {
        if (izquierda < derecha) {
            int medio = (izquierda + derecha) / 2;
            mergePersonas(arr, izquierda, medio);
            mergePersonas(arr, medio + 1, derecha);
            mergePers(arr, izquierda, medio, derecha);
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

    void mostrarPersonas(Persona arr[], int n) {
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

    void mergePers(Persona arr[], int izquierda, int medio, int derecha) {
        int n1 = medio - izquierda + 1;
        int n2 = derecha - medio;
        Persona *L = new Persona[n1];
        Persona *R = new Persona[n2];

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

    int numeros[] = {9, 2, 5, 1, 8};
    char letras[] = {'z', 'e', 'a', 't', 'm'};
    Persona personas[] = {{"Ana", 25}, {"Luis", 19}, {"Carlos", 30}};

    cout << "\nORDENAMIENTO MERGE SORT DE ENTEROS\n";
    ord.mergeEnteros(numeros, 0, 4);
    ord.mostrarEnteros(numeros, 5);

    cout << "\nORDENAMIENTO MERGE SORT DE CARACTERES\n";
    ord.mergeCaracteres(letras, 0, 4);
    ord.mostrarCaracteres(letras, 5);

    cout << "\nORDENAMIENTO MERGE SORT DE PERSONAS (por edad)\n";
    ord.mergePersonas(personas, 0, 2);
    ord.mostrarPersonas(personas, 3);

    return 0;
}

