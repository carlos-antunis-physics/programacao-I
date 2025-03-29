/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 713 - Múltiplos de N num Intervalo
        Link: https://www.thehuxley.com/problem/713
*/

#include <stdio.h>

void escreva_multiplos(int n, int a, int b, int N, int tem_multiplos) {
    if (N > b) {
        if (!tem_multiplos) {
            printf("INEXISTENTE\n");
        }
        return;
    }
    else {
        if ((a <= N) && (N <= b)) {
            tem_multiplos = 1;
            printf("%d\n", N);
        }
        escreva_multiplos(n, a, b, N + n, tem_multiplos);
    }
}

int main() {
    int n;
    int a, b;
    scanf("%d %d %d", &n, &a, &b);
    escreva_multiplos(n,a,b,0,0);
    return 0;
}