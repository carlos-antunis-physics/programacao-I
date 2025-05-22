/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 479 - Colisão no Mapa
        Link: https://www.thehuxley.com/problem/479
*/

#include <stdio.h>
#include <stdlib.h>

unsigned **ler_mapa(unsigned, unsigned);
void movimentar(unsigned *, unsigned *, char, unsigned **, unsigned, unsigned);
void liberar_mapa(unsigned **, unsigned, unsigned);

int main()
{
    unsigned l, c, n;
    unsigned **mapa;
    unsigned x, y;
    
    //  Lê a quantidade de linhas e colunas do mapa
    scanf("%u %u", &l, &c);

    //  Lê o mapa
    mapa = ler_mapa(l, c);

    //  Lê a quantidade de movimentos
    scanf("%u", &n);
    char movimento[n];

    for (unsigned m = 0; m < n; m++)
    {
        scanf(" %c", &movimento[m]);
    }
    
    //  Lê a posição inicial do personagem
    scanf("%u %u", &x, &y);

    for (unsigned m = 0; m < n; m++)
    {
        //  movimentar com base nos ínidices do mapa
        movimentar(&x, &y, movimento[m], mapa, l, c);
    }
    
    //  Imprime a posição final do personagem no array
    printf("(%u,%u)\n", y, x);

    //  Libera a memória alocada para o mapa
    liberar_mapa(mapa, l, c);

    return 0;
}

unsigned **ler_mapa(unsigned l, unsigned c)
{
    //  Aloca memória para o mapa
    unsigned **M = (unsigned **)malloc(c * sizeof(unsigned *));
    for (unsigned i = 0; i < c; i++)
    {
        M[i] = (unsigned *)malloc(l * sizeof(unsigned));
        for (unsigned j = 0; j < l; j++)
        {
            scanf("%u", &M[i][j]);
        }
    }
    return M;
}

void movimentar(unsigned *x0, unsigned *y0, char mvmnt, unsigned **m, unsigned l, unsigned c)
{
    int j = *x0, i = *y0;
    //  Computa a posição a verificar
    switch (mvmnt)
    {
        case 'D':
            j++;
            break;
        case 'E':
            j--;
            break;
        case 'B':
            i++;
            break;
        case 'C':
            i--;
            break;
    }
    if ((-1 < i && i < l) && (-1 < j && j < c) && m[i][j])
    {
        //  Atualiza a posição do personagem
        *x0 = j;
        *y0 = i;
    }
}

void liberar_mapa(unsigned **m, unsigned l, unsigned c)
{
    for (unsigned i = 0; i < c; i++)
    {
        free(m[i]);
    }
    free(m);
}