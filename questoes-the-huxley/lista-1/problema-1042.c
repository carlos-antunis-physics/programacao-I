/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1042 - Idade em segundos
        Link: https://thehuxley.com/problem/1042
*/

#include <stdio.h>

int main() {
    int idade_em_anos;
    //  ler idade em anos
    scanf("%d", &idade_em_anos);
    //  imprima idade convertida para segundos
    printf("%d\n", idade_em_anos * (365) * (24) * (60) * (60));
	return 0;
}