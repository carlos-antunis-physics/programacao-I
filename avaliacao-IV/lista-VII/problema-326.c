/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 326 - Sequência Lógica II
        Link: https://www.thehuxley.com/problem/326
*/

#include <stdio.h>

void imprimir_sequencia(int, int);

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    imprimir_sequencia(x, y);
    return 0;
}

void imprimir_sequencia(int x, int y)
{
    for (int n = 1; n <= y; n++)
    {
        //  imprima o numero
        printf("%d%s", n, !(n % x)? "\n" : " ");
    }
}