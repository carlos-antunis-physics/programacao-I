/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 552 - Algoritmo de Euclides
        Link: https://www.thehuxley.com/problem/552
*/

#include <stdio.h>
#include <math.h>

int mdc(int a, int b) {
    return (b == 0)? a: mdc(b, a%b);
}
void imprime_mdcs(int pares_restantes) {
    if (pares_restantes == 0) {
        //  imprime a string com os MDC's
        return;
    }
    else {
        //  realizar a leitura de inteiros
        int a, b;
        scanf("%d%d", &a, &b);
        printf("MDC(%d,%d) = %d\n", a, b, mdc(a, b));
        imprime_mdcs(pares_restantes - 1);
        return;
    }
}

int main() {
    int n;
    //  ler quantos pares precisam ser lidos
    scanf("%d", &n);
    imprime_mdcs(n);
    return 0;
}