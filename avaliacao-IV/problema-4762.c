/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4762 - Prepare-se para a guerra!
        Link: https://www.thehuxley.com/problem/4762
*/

#include <stdio.h>
#include <stdlib.h>

int **Tropas(unsigned, unsigned);
double media_principal(int **, unsigned, unsigned);
double media_secundaria(int **, unsigned, unsigned);

int main()
{
    //  Leitura do tamanho da matriz
    unsigned l, c;
    scanf("%u %u", &l, &c);
    //  Leitura das tropas
    int **tropas = Tropas(l, c);
    //  Leitura da quantidade de ataques
    unsigned a;
    int x_0, y_0, D, half_D;
    scanf("%u", &a);
    for (unsigned i = 0; i < a; i++)
    {
        scanf("%d%d%d", &x_0, &y_0, &D);
        D = (D > 0) ? D : 0;
        half_D = D / 2;
        for (int x = x_0 - 1; x <= x_0 + 1; x++)
        {
            for (int y = y_0 - 1; y <= y_0 + 1; y++)
            {
                //  sendo um ponto no mapa
                if ((-1 < x && x < l) && (-1 < y && y < c))
                {
                    tropas[x][y] -= ((x == x_0) && (y == y_0)) ? D : half_D;
                    tropas[x][y] = (tropas[x][y] > 0) ? tropas[x][y] : 0;
                }
            }
        }
    }
    for (unsigned x = 0; x < l; x++)
    {
        for (unsigned y = 0; y < c - 1; y++)
        {
            printf("%d ", tropas[x][y]);
        }
        printf("%d\n", tropas[x][c - 1]);
    }
    printf("%.2lf\n", media_principal(tropas, l, c));
    printf("%.2lf\n", media_secundaria(tropas, l, c));
    return 0;
}

int **Tropas(unsigned l, unsigned c)
{
    int **t = (int **)malloc(l * sizeof(int *));
    for (unsigned i = 0; i < l; i++)
    {
        t[i] = (int *)malloc(c * sizeof(int));
    }
    for (unsigned i = 0; i < l; i++)
    {
        for (unsigned j = 0; j < c; j++)
        {
            scanf("%d", &t[i][j]);
        }
    }
    return t;
}
double media_principal(int **t, unsigned l, unsigned c)
{
    double m = 0., n = 0.;
    for (unsigned i = 0; (i < l) && (i < c); i++)
    {
        m += t[i][i];
        n++;
    }
    return m / n;
}
double media_secundaria(int **t, unsigned l, unsigned c)
{
    double m = 0., n = 0.;
    for (unsigned i = 0; (i < l) && (i < c); i++)
    {
        m += t[i][c - 1 - i];
        n++;
    }
    return m / n;
}