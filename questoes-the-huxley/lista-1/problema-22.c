/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/
    
    Problema: 22 - Tabuada
        Link: https://www.thehuxley.com/problem/22
*/

#include <stdlib.h>

int main()
{
    int numero;
    //  ler numero
    scanf("%d", &numero);
    //  imprimir tabuada (do jeito feio - sem recursão)
    printf("%d X 1 = %d\n", numero, 1 * numero);
    printf("%d X 2 = %d\n", numero, 2 * numero);
    printf("%d X 3 = %d\n", numero, 3 * numero);
    printf("%d X 4 = %d\n", numero, 4 * numero);
    printf("%d X 5 = %d\n", numero, 5 * numero);
    printf("%d X 6 = %d\n", numero, 6 * numero);
    printf("%d X 7 = %d\n", numero, 7 * numero);
    printf("%d X 8 = %d\n", numero, 8 * numero);
    printf("%d X 9 = %d\n", numero, 9 * numero);
    return 0;
}