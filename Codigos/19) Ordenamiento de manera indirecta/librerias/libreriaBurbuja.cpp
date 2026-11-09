#include "libreriaBurbuja.h"

int main() {
    Control control;  

    int enteros[] = {5, 2, 9, 1, 7};
    char caracteres[] = {'z', 'b', 'a', 'f', 'c'};
    Persona personas[] = {{"Ana", 30}, {"Luis", 25}, {"Marta", 28}, {"Pedro", 21}};

    int nE = 5, nC = 5, nP = 4;

    ordenarEnteros(enteros, nE);
    ordenarCaracteres(caracteres, nC);
    ordenarPersonas(personas, nP);

    return 0; 
}

