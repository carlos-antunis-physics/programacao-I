/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1291 - Brincando com matrizes
        Link: https://www.thehuxley.com/problem/1291
*/

#include <stdio.h>

int maior_elemento(int [3][3]);
double media(int [3][3]);
int tr(int [3][3]);

int main()
{
    int matrix[3][3];
    unsigned linhas = 3, colunas = 3;
    for (unsigned l = 0; l < linhas; l++)
    {
        for (unsigned c = 0; c < colunas; c++)
        {
            scanf("%d", &matrix[l][c]);
        }
    }
    int maior = maior_elemento(matrix);
    printf("%.2lf ", media(matrix));
    printf("%d %d ", maior, (maior != 0) ? (2 * (maior > 0) - 1) : 0);
    printf("%d\n", tr(matrix));
    return 0;
}

int maior_elemento(int M[3][3])
{
    int maior = M[0][0];
    for (unsigned l = 0; l < 3; l++)
    {
        for (unsigned c = 0; c < 3; c++)
        {
            maior = (M[l][c] > maior) ? M[l][c] : maior;
        }
    }
    return maior;
}
double media(int M[3][3])
{
    double m = 0;
    for (unsigned l = 0; l < 3; l++)
    {
        for (unsigned c = 0; c < 3; c++)
        {
            m += M[l][c];
        }
    }
    return m / 9.;
}
int tr(int M[3][3])
{
    int traco = 0;
    for (unsigned i = 0; i < 3; i++)
    {
        traco += M[i][i];
    }
    return traco;
}