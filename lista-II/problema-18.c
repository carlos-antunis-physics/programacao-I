/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 18 - Menor de 3
        Link: https://www.thehuxley.com/problem/18
*/

#include <stdio.h>

int main() {
    int a, b, c;
    int min;
    //  ler os tr�s inteiros
    scanf("%d%d%d", &a, &b, &c);
    //  suponha que a lista esta ordenada
    min = a;
    //  caso b seja menor que o menor numero
    if (b < min) {
        min = b;    // b eh o menor numero
    }
    if (c < min) {
        min = c;    // c eh o menor numero
    }
    printf("%d\n", min);
    return 0;
}