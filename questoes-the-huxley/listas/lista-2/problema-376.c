/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 376 - Conceito MEC
        Link: https://www.thehuxley.com/problem/376
*/

#include <stdio.h>

int main() {
    int alunos, livros;
    double porcentagem;
    //  ler numero de alunos e numero de livros
    scanf("%d%d", &livros, &alunos);
    //  computar a porcentagem de livros por aluno
    porcentagem = (double)alunos / livros;
    //  imprimir conceito
    if (porcentagem <= 8.) {
        printf("A\n");
    } else if (porcentagem <= 12.) {
        printf("B\n");
    } else if (porcentagem <= 18.) {
        printf("C\n");
    } else {
        printf("D\n");
    }
    return 0;
}