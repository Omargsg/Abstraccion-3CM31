//calculadora.cpp
#include "calculadora.h"


int multiplicar(int a, int b) {
    if(b==0) return 0;
    return a + multiplicar(a,b-1);
}

int potencia(int base, int exp) {
    if(exp==0) return 1;
    return base * potencia(base, exp-1);
}

double dividir(double dividendo, double divisor) {
    if(divisor==0) return -1;
    if(dividendo<divisor) return 0;
    return 1 + dividir(dividendo-divisor, divisor);
}

long long factorial(int n) {
    if(n<=1) return 1;
    return n * factorial(n-1);
}

long long fibonacci(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int sierpinski(int n) {
    if(n==0) return 1;
    return 3 * sierpinski(n-1);
}

int cantor(int n) {
    if(n==0) return 1;
    return 2 * cantor(n-1);
}

