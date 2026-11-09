#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

class Ordenamiento {
private:
    int *indice;
    int *temp;

public:
    Ordenamiento() {
        cout << "\n[Constructor] Objeto de ordenamiento Merge Sort creado.\n";
    }

    ~Ordenamiento() {
        cout << "\n[Destructor] Objeto de ordenamiento Merge Sort destruido.\n";
    }

    void mergeEnteros(int *arr, int izquierda, int medio, int derecha) {
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

    void mergeSortEnteros(int *arr, int izquierda, int derecha) {
        if (izquierda < derecha) {
            int medio = (izquierda + derecha) / 2;
            mergeSortEnteros(arr, izquierda, medio);
            mergeSortEnteros(arr, medio + 1, derecha);
            mergeEnteros(arr, izquierda, medio, derecha);
        }
    }

    void ordenarEnteros(int *arr, int n) {
        indice = new int[n];
        temp = new int[n];
        for (int i = 0; i < n; i++) indice[i] = i;
        mergeSortEnteros(arr, 0, n - 1);

        cout << "\nEnteros ordenados:\n ";
        for (int i = 0; i < n; i++)
            cout << *(arr + indice[i]) << " ";

        delete[] indice;
        delete[] temp;
    }

    void mergeCaracteres(char *arr, int izquierda, int medio, int derecha) {
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

    void mergeSortCaracteres(char *arr, int izquierda, int derecha) {
        if (izquierda < derecha) {
            int medio = (izquierda + derecha) / 2;
            mergeSortCaracteres(arr, izquierda, medio);
            mergeSortCaracteres(arr, medio + 1, derecha);
            mergeCaracteres(arr, izquierda, medio, derecha);
        }
    }

    void ordenarCaracteres(char *arr, int n) {
        indice = new int[n];
        temp = new int[n];
        for (int i = 0; i < n; i++) indice[i] = i;
        mergeSortCaracteres(arr, 0, n - 1);

        cout << "\nCaracteres ordenados:\n ";
        for (int i = 0; i < n; i++)
            cout << *(arr + indice[i]) << " ";

        delete[] indice;
        delete[] temp;
    }

    void mergePersonas(Persona *arr, int izquierda, int medio, int derecha) {
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

    void mergeSortPersonas(Persona *arr, int izquierda, int derecha) {
        if (izquierda < derecha) {
            int medio = (izquierda + derecha) / 2;
            mergeSortPersonas(arr, izquierda, medio);
            mergeSortPersonas(arr, medio + 1, derecha);
            mergePersonas(arr, izquierda, medio, derecha);
        }
    }

    void ordenarPersonas(Persona *arr, int n) {
        indice = new int[n];
        temp = new int[n];
        for (int i = 0; i < n; i++) indice[i] = i;
        mergeSortPersonas(arr, 0, n - 1);

        cout << "\nPersonas ordenadas por edad:\n";
        for (int i = 0; i < n; i++)
            cout << (arr + indice[i])->nombre << " (" << (arr + indice[i])->edad << " anios)\n";

        delete[] indice;
        delete[] temp;
    }
};

int main() {
    Ordenamiento ord;

    int enteros[] = {7, 3, 9, 1, 4};
    char caracteres[] = {'f', 'c', 'z', 'a', 'm'};
    Persona personas[] = {{"Carlos", 32}, {"Ana", 22}, {"Luis", 27}, {"Maria", 19}};

    int nE = 5, nC = 5, nP = 4;

    ord.ordenarEnteros(enteros, nE);
    ord.ordenarCaracteres(caracteres, nC);
    ord.ordenarPersonas(personas, nP);

    return 0;
}

