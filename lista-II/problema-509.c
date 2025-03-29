/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 509 - Comparador de números inteiros
        Link: https://www.thehuxley.com/problem/509
*/

#include <stdio.h>

int main() {
    int n, m;
    //   ler os inteiros
    scanf("%d%d", &n, &m);
    //   mostrar resultados
    printf("%d\n", n>m);
    printf("%d\n", n==m);
    printf("%d\n", n<m);
    printf("%d\n", n!=m);
    printf("%d\n", n>=m);
    printf("%d\n", n<=m);
    return 0;
}