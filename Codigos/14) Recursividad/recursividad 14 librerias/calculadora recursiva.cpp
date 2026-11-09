#include <iostream>
#include "calculadora.h"
using namespace std;

int main(){
    int opcion;
    do{
        cout << "\n1.Multiplicacion 2.Potencia 3.Division 4.Factorial 5.Fibonacci 6.Salir\n";
        cout << "Opcion: "; cin >> opcion;

        if(opcion==1){ int a,b; cout<<"Ingresa dos numeros: "; cin>>a>>b; cout<<"Resultado: "<<multiplicar(a,b)<<endl;}
        else if(opcion==2){ int base,exp; cout<<"Ingresa base y exponente: "; cin>>base>>exp; cout<<"Resultado: "<<potencia(base,exp)<<endl;}
        else if(opcion==3){ double d,v; cout<<"Ingresa dividendo y divisor: "; cin>>d>>v; double res=dividir(d,v);
		 if(res==-1) cout<<"Error: division por cero"<<endl; 
		else cout<<"Resultado: "<<res<<endl;}
        else if(opcion==4){ int n; cout<<"Ingresa un numero: "; cin>>n; cout<<"Factorial: "<<factorial(n)<<endl;}
        else if(opcion==5){ int n; cout<<"Ingresa posicion Fibonacci: "; cin>>n; cout<<"Fibonacci: "<<fibonacci(n)<<endl;}
    }while(opcion!=6);

    return 0;
}

