/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 3895 - A viagem
        Link: https://www.thehuxley.com/problem/3895
*/

#include <stdio.h>

int main() {
    double salario, tarifa, preco_por_quilometro, quilometragem;
    int viagem_eh_fim_de_semana;
    double preco_corrida, dinheiro_diponivel;
    //  leitura dos dados de entrada
    scanf("%lf%lf%lf%lf", &salario, &tarifa, &preco_por_quilometro, &quilometragem);
    scanf("%d", &viagem_eh_fim_de_semana);
    //  computar valor da viagem
    preco_corrida = tarifa + preco_por_quilometro * quilometragem;
    preco_corrida = preco_corrida * (1. + .1 * viagem_eh_fim_de_semana);    // aumenta em 10% se fim de semana
    dinheiro_diponivel = .3 * salario;                                      // apenas 30% do salário
    if (preco_corrida <= dinheiro_diponivel) {
        printf("Vai poder viajar.\n");
        printf("%.2lf\n%.2lf\n", preco_corrida, dinheiro_diponivel - preco_corrida);
    }
    else {
        printf("Não vai poder viajar.\n");
        printf("%.2lf\n",preco_corrida - dinheiro_diponivel);
    }
    
    return 0;
}