#include <iostream>
using namespace std;

// Definición de la clase
class Parametros {
private:
    int num1, num2; // atributos para almacenar los numeros

public:
    // Constructor para inicializar los numeros
    Parametros(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Metodo para realizar la suma
    void suma() {
        int resultado = num1 + num2;
        cout << "El resultado es: " << resultado << endl;
    }
};

int main() {
    int n1, n2;

    cout << "Ingresa el primer numero: ";
    cin >> n1;

    cout << "Ingresa el segundo numero: ";
    cin >> n2;

    // Crear un objeto de la clase 
    Parametros para(n1, n2);

    // Llamar al método sumar
    para.suma();

    return 0;
}

