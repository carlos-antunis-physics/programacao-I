/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1032 - Quantas tocas existem?
        Link: https://www.thehuxley.com/problem/1032
*/

#include <stdio.h>

void ler_array(int [], unsigned);
void set_false(int [], unsigned);
unsigned toca(int [], int [], unsigned);
unsigned computar_tocas(int [], int [], unsigned, unsigned);

int main()
{
    unsigned N;
    //  ler o tamanho da array
    scanf("%u", &N);
    //  ler os itens a serem armazenados na array
    int array[N], buracos_percorridos[N];
    ler_array(array, N);
    set_false(buracos_percorridos, N);
    //  ler valor a contar ocorrencias
    printf("%u\n", computar_tocas(array, buracos_percorridos, 0, N));
    return 0;
}

void ler_array(int array[], unsigned n)
{
    if (!n)                         //  caso de parada
    {
        return;
    }
    //  requisitar a leitura do elemento anterior
    ler_array(array, n - 1);
    //  efetuar a leitura do n-esimo elemento
    scanf("%d", &array[n - 1]);
}

void set_false(int array[], unsigned n)
{
    if (!n)                         //  caso de parada
    {
        return;
    }
    //  requisitar a definicao do valor como false até
    //  o elemento anterior
    set_false(array, n - 1);
    //  efetuar a leitura do n-esimo elemento
    array[n - 1] = 0;
}

unsigned toca(int grafo[], int buraco[], unsigned n)
{
    if (buraco[n])                  //  caso o buraco tenha sido percorrido
    {
        return 1;
    }
    buraco[n] = 1;                  // marcar como percorrido
    //  diriga-se ao proximo buraco da toca
    return toca(grafo, buraco, grafo[n]);
}

unsigned computar_tocas(int grafo[], int buraco[], unsigned n, unsigned N)
{
    if (n == N)                     //  caso de parada
    {
        return 0;
    }
    if (buraco[n])                  //  caso o buraco foi percorrido
    {
        //  compute as tocas do proximo buraco
        return computar_tocas(grafo, buraco, n+1, N);
    }
    //  marque os buracos da toca atual
    return toca(grafo, buraco, n) + computar_tocas(grafo, buraco, n+1, N);
}