/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 696 - Quantas vezes x apareceu?
        Link: https://www.thehuxley.com/problem/696
*/

#include <stdio.h>

void ler_array(int [], unsigned, unsigned);
unsigned computar_ocorrencias(int [], int, unsigned);

int main()
{
    int array[6];
    int valor;
    //  ler os itens a serem armazenados na array
    ler_array(array, 0, 10);
    //  ler valor a contar ocorrencias
    scanf("%d", &valor);
    printf("%u\n", computar_ocorrencias(array, valor, 10));
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

unsigned computar_ocorrencias(int array[], int valor, unsigned n)
{
    return (n == 0) ? 0 : ((array[n - 1] == valor) + computar_ocorrencias(array, valor, n - 1));
}