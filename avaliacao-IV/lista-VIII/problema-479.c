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
    unsigned y, x;
    
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
        movimentar(&x, &y, movimento[m], mapa, l, c);
    }
    
    //  Imprime a posição final do personagem
    printf("(%u,%u)\n", x, y);

    //  Libera a memória alocada para o mapa
    liberar_mapa(mapa, l, c);

    return 0;
}

unsigned **ler_mapa(unsigned l, unsigned c)
{
    //  Aloca memória para o mapa
    unsigned **M = (unsigned **)malloc(l * sizeof(unsigned *));
    for (unsigned j = 0; j < l; j++)
    {
        M[j] = (unsigned *)malloc(c * sizeof(unsigned));
        for (unsigned i = 0; i < c; i++)
        {
            scanf("%u", &M[j][i]);
        }
    }
    return M;
}

void movimentar(unsigned *j0, unsigned *i0, char mvmnt, unsigned **m, unsigned l, unsigned c)
{
    int i = *i0, j = *j0;
    //  Computa a posição a verificar
    switch (mvmnt)
    {
        case 'D':
            i++;
            break;
        case 'E':
            i--;
            break;
        case 'B':
            j++;
            break;
        case 'C':
            j--;
            break;
    }
    if ((-1 < i && i < c) && (-1 < j && j < l) && m[j][i])
    {
        //  Atualiza a posição do personagem
        *i0 = i;
        *j0 = j;
    }
}

void liberar_mapa(unsigned **m, unsigned l, unsigned c)
{
    for (unsigned i = 0; i < l; i++)
    {
        free(m[i]);
    }
    free(m);
}