#include "libreriaMerge1.h"

int main() {
    Control control; 

    int enteros[] = {84, 53, 58, 42, 59};
    char caracteres[] = {'r', 's', 'b', 'a', 'c'};
    Tortuga tortugas[] = {{"Bibi", 120}, {"Cacahuate", 50}, {"Limon", 33}, {"Manchas", 104}};

    int nE = 5, nC = 5, nP = 4;

    ordenarEnteros(enteros, nE);
    ordenarCaracteres(caracteres, nC);
    ordenarTortugas(tortugas, nP);

    return 0;
}

