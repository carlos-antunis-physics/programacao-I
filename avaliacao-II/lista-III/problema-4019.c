/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4019 - Fatorial simples
        Link: https://www.thehuxley.com/problem/4019
*/

#include <stdio.h>

unsigned int fatorial(unsigned int n) {
    return (n == 0) ? 1 : n * fatorial(n - 1);
}

unsigned ler_unsigned() {
    unsigned int n;
    scanf("%d", &n);
    return n;
}

int main() {
    printf("%d", fatorial(ler_unsigned()));
    return 0;
}