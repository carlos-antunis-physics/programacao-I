/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 396 - Abaixo a poluição
        Link: https://www.thehuxley.com/problem/396
*/

#include <stdio.h>

void computar_multas(int, double);

int main() {
    //  imprimir casas multadas e o valor total arrecadado
    computar_multas(0, 0.);
    return 0;
}

void computar_multas(int casas_multadas, double valor_arrecadado) {
    int carros;
    scanf("%d", &carros);
    if (carros == 999) {    //  condicao de parada
        printf("%.2lf\n%d\n", valor_arrecadado, casas_multadas);
        return;
    }
    //  adicionar 1 casa multada para mais de 2 carros
    casas_multadas += (carros > 2);
    //  adicionar R$ 12.89 para cada carro adicional se ha mais de 2 carros
    valor_arrecadado += (carros > 2) ? (carros - 2) * 12.89 : 0.;
    computar_multas(casas_multadas, valor_arrecadado);
}