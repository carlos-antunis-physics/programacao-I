/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 691 - Dois números em ordem crescente
        Link: https://www.thehuxley.com/problem/691
*/

#include <stdio.h>

int main() {
    int a, b;
    //  ler numeros
    scanf("%d%d", &a, &b);
    //  escreve-los ordenados (a <= b) e (b < a) sao disjuntos
    //  permitindo a escolha do valor correto
    printf("%d %d\n", (a <= b) * a + (b < a) * b, (a >= b) * a + (b > a) * b);
    return 0;
}