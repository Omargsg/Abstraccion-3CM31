#include "libreriaBurbuja1.h"

int main() {
    Control control;  

    int enteros[] = {5, 2, 9, 1, 7, 10, 186};
    char caracteres[] = {'o', 'b', 'a', 'f', 'c'};
    Perro perros[] = {{"Bilim", 3}, {"Lulu", 2}};

    int nE = 7, nC = 6, nP = 2;

    ordenarEnteros(enteros, nE);
    ordenarCaracteres(caracteres, nC);
    ordenarPerros(perros, nP);

    return 0;
}

