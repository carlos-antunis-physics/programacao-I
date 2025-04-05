/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 72 - Inverso
        Link: https://www.thehuxley.com/problem/72
*/

#include <stdio.h>

void ler_e_imprimir_na_ordem_inversa(int);

int main()
{
    unsigned N;
    scanf("%d", &N);
    //  ler N numeros e escrever na ordem inversa
    ler_e_imprimir_na_ordem_inversa(N);
    return 0;
}

void ler_e_imprimir_na_ordem_inversa(int numeros) {
    if (!numeros) {     // nao havendo mais numeros a serem lidos
        return;
    }
    int n;
    scanf("%d", &n);    // leia o numero
    //  requisite a leitura e escrita dos proximos numeros
    ler_e_imprimir_na_ordem_inversa(numeros - 1);
    printf("%d ", n);   // escreva o numero
}