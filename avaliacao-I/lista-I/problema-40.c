/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 40 - Coma bem
        Link: https://www.thehuxley.com/problem/40
*/

#include <stdio.h>

int main() {
    double valor_gasto;
    double taxa = (100. + 10.) / 100.;
    //  ler valor gasto pelo cliente
    scanf("%lf", &valor_gasto);
    //  imprimir o valor acrescido de 10%
    printf("%.2lf", valor_gasto * taxa);
    return 0;
}