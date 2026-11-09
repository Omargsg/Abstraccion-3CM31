#include "libreriaMerge.h"

int main() {
    Control control; 

    int enteros[] = {8, 3, 5, 2, 9};
    char caracteres[] = {'d', 'x', 'b', 'a', 'c'};
    Persona personas[] = {{"Laura", 29}, {"Pablo", 21}, {"Carmen", 25}, {"Andres", 18}};

    int nE = 5, nC = 5, nP = 4;

    ordenarEnteros(enteros, nE);
    ordenarCaracteres(caracteres, nC);
    ordenarPersonas(personas, nP);

    return 0;
}

