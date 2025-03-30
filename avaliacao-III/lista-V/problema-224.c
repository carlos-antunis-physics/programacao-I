/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 224 - Desafio do maior número
        Link: https://www.thehuxley.com/problem/224
*/

#include <stdio.h>
#include <math.h>

int computar_maior_da_sequencia(int);

int main() {
    printf("%d\n", computar_maior_da_sequencia(0));
    return 0;
}

int computar_maior_da_sequencia(int maior) {
    int valor;
    scanf("%d", &valor);
    if (!valor) {       // se o valor lido for 0 encerre o processo
        return maior;
    }
    maior = (valor > maior) ? valor : maior;
    return computar_maior_da_sequencia(maior);
}