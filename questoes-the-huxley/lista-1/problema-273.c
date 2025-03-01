/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 273 - Média 1
        Link: https://www.thehuxley.com/problem/273
*/

#include <stdio.h>

int main() {
    double a, b;
    //  ler valores da nota
    scanf("%lf%lf", &a, &b);
    //  escrever m?dia dos n?meros reais
    printf("MEDIA = %.5lf\n", (3.5 * a + 7.5 * b) / 11.);
	return 0;
}