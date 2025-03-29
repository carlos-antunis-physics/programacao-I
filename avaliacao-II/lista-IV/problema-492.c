/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 492 - Cápsulas de Café
        Link: https://www.thehuxley.com/problem/492
*/

#include <stdio.h>
#include <ctype.h>

int contar_capsulas(int, int);

int main() {
    int capsulas = contar_capsulas(7, 0);
    printf("%d\n%d\n", capsulas, capsulas * 2 / 7);
	return 0;
}

int contar_capsulas(int professores, int capsulas) {
    if (!professores) {
        return capsulas;
    } else {
        int quantidade;
        char tamanho;
        scanf("%d %c", &quantidade, &tamanho);
        tamanho = tolower(tamanho);
        capsulas += quantidade * ((tamanho == 'p') ? 10: 16);
        return contar_capsulas(professores - 1, capsulas);
    }
}