/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 2131 - Matriz de votação
        Link: https://www.thehuxley.com/problem/2131
*/

#include <stdio.h>

int main()
{
    int P;
    //  Le o numero de princesas
    scanf("%d", &P);
    //  Aloca a matriz de votos
    int voto, princesa[P];
    for (unsigned i = 0; i < P; i++)
    {
        //  Inicializa a matriz de votos de cada princesa
        princesa[i] = 0;
    }
    //  Le o numero de eleitores
    unsigned E;
    scanf("%u", &E);
    //  Inicializa a matriz de votos
    for (int i = 0; i < E; i++)
    {
        for (unsigned j = 0; j < P; j++)
        {
            scanf("%d", &voto);
            princesa[j] += voto;
        }
    }
    //  Informa a quantidade de votos de cada princesa
    for (unsigned i = 0; i < P; i++)
    {
        printf("Princesa %d: %d voto(s)\n", i + 1, princesa[i]);
    }
    return 0;
}
