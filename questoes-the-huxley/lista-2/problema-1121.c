/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1121 - Análise de crédito
        Link: https://www.thehuxley.com/problem/1121
*/

#include <stdio.h>

int main() {
    double salario, valor_comprometido;
    double parcela_disponivel;
    //  ler salario e valor comprometido
    scanf("%lf%lf", &salario, &valor_comprometido);
    //  computar a parcela disponivel
    parcela_disponivel = .3 * salario - valor_comprometido;
    parcela_disponivel =
        0.                                                  // 0 a principio
        + (parcela_disponivel > 0.) * parcela_disponivel;   // se positivo, disponibilizar credito
    //  imprimir parcela disponivel
    printf("%.2lf\n", parcela_disponivel);
    return 0;
}