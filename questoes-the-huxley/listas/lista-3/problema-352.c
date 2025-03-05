/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 352 - Calcular MDC de forma recursiva
        Link: https://www.thehuxley.com/problem/352
*/

#include <stdio.h>

unsigned mdc(unsigned a, unsigned b) {
    int resto = a % b;
    if (resto == 0) {
        return b;
    }
    else {
        return mdc(b, resto);
    }
}

int main() {
    unsigned a, b;
    scanf("%u%u", &a, &b);
    printf("%u\n", mdc(a, b));
    return 0;
}