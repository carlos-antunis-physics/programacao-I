/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 32 - Fahrenheit para Celsius
        Link: https://www.thehuxley.com/problem/32
*/

#include <stdio.h>

int main() {
    double temperatura_f;
    //  ler temperatura em fahrenheit
    scanf("%lf", &temperatura_f);
    //  imprimir temperatura em celsius
    printf("%.2lf\n", 5. * (temperatura_f - 32.) / 9.);
    return 0;
}