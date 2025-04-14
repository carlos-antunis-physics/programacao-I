/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 50 - Foto de Família
        Link: https://www.thehuxley.com/problem/50
*/

#include <stdio.h>

void ler_array(int [], unsigned, unsigned);
void computar_extremos(int [], int, int, unsigned, unsigned);

int main()
{
    int array[6];
    //  ler os itens a serem armazenados na array
    ler_array(array, 0, 6);
    //  obter o maior e menor valor da array (supondo os extremos a priori)
    computar_extremos(array, array[0], array[5], 0, 6);
    return 0;
}

void ler_array(int array[], unsigned n, unsigned N)
{
    if (n == N)                         //  caso de parada
    {
        return;
    }
    //  efetuar a leitura do n-esimo elemento
    scanf("%d", &array[n]);
    //  requisitar a leitura do proximo elemento
    ler_array(array, n + 1, N);
}

void computar_extremos(int array[], int min, int max, unsigned n, unsigned N)
{
    if (n == N)                         //  caso de parada
    {
        //  escreva os extremos separados por quebra de linha
        printf("%d\n%d\n", min, max);
        return;
    }
    //  computar o minimo entre o menor valor armazenado e o elemento da array
    min = (min < array[n]) ? min : array[n];
    //  computar o maximo entre o maior valor armazenado e o elemento da array
    max = (max > array[n]) ? max : array[n];
    //  requisitar a computacao do proximo elemento da array
    computar_extremos(array, min, max, n + 1, N);
}