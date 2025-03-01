/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 271 - Área do círculo
        Link: https://www.thehuxley.com/problem/271
*/

#include <stdio.h>

int main() {
    double pi = 3.14159;
    double raio;
    //  ler o valor do raio
    scanf("%lf", &raio);
    //  imprimir a area do circulo
    printf("Area = %.4lf\n", pi * (raio / 100.) * (raio / 100.));
	return 0;
}