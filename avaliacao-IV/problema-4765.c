/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4765 - Uma gota de água
        Link: https://www.thehuxley.com/problem/4765
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int **Mapa(int *);

int main()
{
    int c;
    int f;
    
    //  Leitura da coluna inicial
    scanf("%d", &c);
    //  Leitura do mapa
    int **mapa = Mapa(&f);
    for (unsigned i = 0; i < 4; i++)
    {
        if (!(c < 0 || c > 4))
        {
            c += (mapa[i][c] < 2) ? mapa[i][c] : -1;
        }
    }
    printf("%s\n",(c == f) ? "Me molhou!" : (fabs(c - f) == 1) ? "AGUA" : "Tenho sede");
    return 0;
}

int **Mapa(int *f)
{
    int **M = malloc(4 * sizeof(int *));
    for (unsigned i = 0; i < 4; i++)
    {
        M[i] = malloc(5 * sizeof(int));
    }
    for (unsigned i = 0; i < 4; i++)
    {
        for (unsigned j = 0; j < 5; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    int valor;
    for (unsigned i = 0; i < 5; i++)
    {
        scanf("%d", &valor);
        if (valor == 3)
        {
            *f = i;
        }
    }
    return M;
}