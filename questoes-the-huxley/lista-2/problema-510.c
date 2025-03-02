/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 510 - Ingresso no Cinema
        Link: https://www.thehuxley.com/problem/510
*/

#include <stdio.h>

int main() {
    int eh_estudante, eh_idoso;
    //  ler condicoes de meia-entrada
    scanf("%d%d", &eh_estudante, &eh_idoso);
    //  imprimir se ele eh estudante ou idoso
    printf("%d\n", eh_estudante || eh_idoso);
    return 0;
}