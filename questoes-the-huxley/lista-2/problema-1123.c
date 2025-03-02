/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1123 - Chance de Aprovação
        Link: https://www.thehuxley.com/problem/1123
*/

#include <stdio.h>

int main() {
    int problemas, problemas_solucionados;
    double porcentagem, chance_aprovacao;
    //  ler numero de problemas e numero de problemas solucionados
    scanf("%d%d", &problemas, &problemas_solucionados);
    //  computar a chance de aprovacao
    porcentagem = (double)problemas_solucionados / problemas * 100.;
    chance_aprovacao =
        4.4                     // 4.4% de chance a priori
        //  caso conclua mais que 20% adicionar 27.25% de chance
        + (porcentagem >= 20.) * 27.25      // (totalizando 31.65%)
        //  caso conclua mais que 40% adicionar 25.17% de chance
        + (porcentagem >= 40.) * 25.17      // (totalizando 56.82%)
        //  caso conclua mais que 60% adicionar 23.18% de chance
        + (porcentagem >= 60.) * 23.18      // (totalizando 80.00%)
        //  caso conclua mais que 80% adicionar 14.00% de chance
        + (porcentagem >= 80.) * 14.00;     // (totalizando 94.00%)
    //  imprimir chance de aprovacao
    printf("%.2lf%% %.2lf%% ", porcentagem, chance_aprovacao);
    //  imprimir conceito
    if (porcentagem >= 80.)
    {
        printf("Excelente\n");
        return 0;
    }
    else if (porcentagem >= 60.)
    {
        printf("Muito Bom\n");
        return 0;
    }
    else if (porcentagem >= 40.)
    {
        printf("Bom\n");
        return 0;
    }
    else if (porcentagem >= 20.)
    {
        printf("Ruim\n");
        return 0;
    }
    else
    {
        printf("Pessimo\n");
        return 0;
    }
}