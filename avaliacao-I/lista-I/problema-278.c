/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 278 - Diferença
        Link: https://www.thehuxley.com/problem/278
*/

#include <stdio.h>

int main() {
    int a,b,c,d;
    //  ler numeros
    scanf("%d%d%d%d", &a, &b, &c, &d);
    //  escrever diferenca entre produtos
    printf("DIFERENCA = %d\n", a*b - c*d);
    return 0;
}