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

public:
    Ordenamiento() {
        cout << "\n[Constructor] Objeto de ordenamiento creado.\n";
    }

    ~Ordenamiento() {
        cout << "\n[Destructor] Objeto de ordenamiento destruido.\n";
    }

    void ordenarEnteros(int *arr, int n) {
        indice = new int[n];
        for (int i = 0; i < n; i++) indice[i] = i;

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (*(arr + indice[j]) > *(arr + indice[j + 1])) {
                    int temp = indice[j];
                    indice[j] = indice[j + 1];
                    indice[j + 1] = temp;
                }
            }
        }

        cout << "\nEnteros ordenados:\n ";
        for (int i = 0; i < n; i++)
            cout << *(arr + indice[i]) << " ";

        delete[] indice;
    }

    void ordenarCaracteres(char *arr, int n) {
        indice = new int[n];
        for (int i = 0; i < n; i++) indice[i] = i;

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (*(arr + indice[j]) > *(arr + indice[j + 1])) {
                    int temp = indice[j];
                    indice[j] = indice[j + 1];
                    indice[j + 1] = temp;
                }
            }
        }

        cout << "\nCaracteres ordenados:\n ";
        for (int i = 0; i < n; i++)
            cout << *(arr + indice[i]) << " ";

        delete[] indice;
    }

    void ordenarPersonas(Persona *arr, int n) {
        indice = new int[n];
        for (int i = 0; i < n; i++) indice[i] = i;

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if ((arr + indice[j])->edad > (arr + indice[j + 1])->edad) {
                    int temp = indice[j];
                    indice[j] = indice[j + 1];
                    indice[j + 1] = temp;
                }
            }
        }

        cout << "\nPersonas ordenadas por edad:\n";
        for (int i = 0; i < n; i++)
            cout << (arr + indice[i])->nombre << " (" << (arr + indice[i])->edad << " anios)\n";

        delete[] indice;
    }
};

int main() {
    Ordenamiento ord;

    int enteros[] = {8, 3, 5, 2, 9};
    char caracteres[] = {'d', 'x', 'b', 'a', 'c'};
    Persona personas[] = {{"Laura", 29}, {"Pablo", 21}, {"Carmen", 25}, {"Andres", 18}};

    int nE = 5, nC = 5, nP = 4;

    ord.ordenarEnteros(enteros, nE);
    ord.ordenarCaracteres(caracteres, nC);
    ord.ordenarPersonas(personas, nP);

    return 0;
}

