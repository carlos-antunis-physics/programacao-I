/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 17 - Antecessor e Sucessor
        Link: https://www.thehuxley.com/problem/17
*/

#include <stdio.h>

int main() {
    int numero;
    //  ler numero inteiro
    scanf("%d", &numero);
    //  escrever antecessor e sucessor
    printf("%d %d\n", numero - 1, numero + 1);
	return 0;
}