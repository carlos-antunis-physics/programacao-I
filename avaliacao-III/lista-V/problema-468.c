/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 468 - Descontos Black Friday
        Link: https://www.thehuxley.com/problem/468
*/

#include <stdio.h>

int computar_descontos(int);

int main() {
    //  imprimir quantidade de descontos
    printf("%d\n", computar_descontos(0));
    return 0;
}

int computar_descontos(int status) {
    if (status == EOF) {
        return 0;
    }
    // leia valores do produto
    double valor_real, valor_bf;
    status = scanf("%lf%lf", &valor_real, &valor_bf);
    return (valor_bf <= .8 * valor_real) + computar_descontos(status);
}