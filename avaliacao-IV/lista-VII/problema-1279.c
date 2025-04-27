/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1279 - Brincando com matrizes
        Link: https://www.thehuxley.com/problem/1279
*/

#include <stdio.h>

void somar_matrizes_quadradas(unsigned);

int main()
{
    unsigned N;
    scanf("%u", &N);
    if (N == 0)
    {
        printf("Vazia\n");
        return 0;
    }
    somar_matrizes_quadradas(N * N);
    return 0;
}

void somar_matrizes_quadradas(unsigned entradas)
{
    int matriz[entradas];
    int elemento;
    for (unsigned i = 0; i < entradas; i++)
    {
        scanf("%d", &matriz[i]);
    }
    for (unsigned i = 0; i < entradas; i++)
    {
        scanf("%d", &elemento);
        printf("%d\n", matriz[i] + elemento);
    }
}