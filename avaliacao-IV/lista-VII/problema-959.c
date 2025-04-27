/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 959 - Sequência Lógica III
        Link: https://www.thehuxley.com/problem/959
*/

#include <stdio.h>

void imprimir_sequencia(int, int, int);

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    imprimir_sequencia(x, y, z);
    return 0;
}

void imprimir_sequencia(int x, int y, int z)
{
    for (int n = 1, m = 1; n <= y; n += z, m++)
    {
        //  imprima o numero
        printf("%d%s", n, !(m % x)? "\n" : " ");
    }
}