/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 43 - Igual ou diferente
        Link: https://www.thehuxley.com/problem/43
*/

#include <stdio.h>

int main() {
    int a, b, c;
    int todos, dois, nenhum;
    //  ler numeros
    scanf("%d%d%d", &a, &b, &c);
    //  testar coincidencias
    todos = (a == b) && (b == c);
    dois = ((a == b) || (b == c) || (c == a)) && !todos;
    nenhum = !todos && !dois;
    //  todos, nenhum e dois sao disjuntos assim somam o valor
    //  desejado apenas
    printf("%d\n", 1 * todos + 2 * nenhum + 3 * dois);
    return 0;
}