/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 342 - Divisível por 3
        Link: https://www.thehuxley.com/problem/342
*/

#include <stdio.h>

int contar_div_multiplos_de_3(int n, int div, int N) {
    if (n < div) {
        return N;
    }
    else {
        if (!(n % div) && !(div % 3)) {
            N++;
        }
        return contar_div_multiplos_de_3(n, div + 1, N);
    }
}

int main() {
    int n;
    int N;
    scanf("%d", &n);
    N = contar_div_multiplos_de_3(n, 1, 0);
    if (N > 0) {
        printf("%d\n", N);
    }
    else {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    return 0;
}