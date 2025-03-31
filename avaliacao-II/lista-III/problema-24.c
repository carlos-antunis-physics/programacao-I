/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 24 - Fatorial
        Link: https://www.thehuxley.com/problem/24
*/

#include <stdio.h>

int fatorial(int n) {
    return (n == 0) ? 1 : n * fatorial(n - 1);
}

void imprimir_proximos_fatoriais() {
    int n;
    scanf("%d", &n);
    if (n == -1) {
        return;         // encerre o processo
    }
    else {
        //  concatenar strings
        printf("%d\n", fatorial(n));
        //  requerer a leitura dos proximos valores
        imprimir_proximos_fatoriais();
        return;
    }
}

int main() {
    imprimir_proximos_fatoriais();
    return 0;
}