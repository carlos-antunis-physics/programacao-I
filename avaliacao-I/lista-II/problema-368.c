/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 368 - Aumento dos trabalhadores
        Link: https://www.thehuxley.com/problem/368
*/

#include <stdio.h>

int main() {
    double salario_atual;
    double taxa_de_aumento;
    //  ler salario atual
    scanf("%lf", &salario_atual);
    //  computar a taxa de aumento
    taxa_de_aumento = 1.05 + (salario_atual > 300.) * .02 + (salario_atual > 500.) * .03;
    //  imprimir salario atualizado
    printf("%.2lf\n", salario_atual * taxa_de_aumento);
    return 0;
}