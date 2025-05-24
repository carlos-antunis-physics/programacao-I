/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1302 - Brincando com matrizes II
        Link: https://www.thehuxley.com/problem/1302
*/

#include <stdio.h>

double Media(int[]);
int Minimo(int[]);
int Soma(int[]);

int main(int argc, char const *argv[])
{
    int matriz[9];

    //  Lê os valores da matriz
    for (unsigned i = 0; i < 9; i++)
    {
        scanf("%d", &matriz[i]);
    }

    //  Computar media
    printf("%.2f ", Media(matriz));
    //  Computar minimo
    int min = Minimo(matriz);
    printf("%d %d ", min, (min + 1) % 2);
    //  Computar traco
    printf("%d\n", Soma(matriz));
    return 0;
}

double Media(int x[])
{
    double media = 0., n = 0;
    for (unsigned i = 0; i < 9; i++)
    {
        media += (x[i] > 0) ? x[i] : 0;
        n += (x[i] > 0) ? 1 : 0;
    }
    return media / n;
}
int Minimo(int x[])
{
    int min = x[0];
    for (unsigned i = 1; i < 9; i++)
    {
        min = (x[i] < min) ? x[i] : min;
    }
    return min;
}
int Soma(int x[])
{
    int traco = 0;
    for (unsigned i = 0; i < 9; i++)
    {
        traco += (i % 4 == 0) ? 0 : x[i];
    }
    return traco;
}