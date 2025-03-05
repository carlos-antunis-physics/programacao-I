/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 3777 - Sistema de ingressos
        Link: https://www.thehuxley.com/problem/3777
*/

#include <stdio.h>

double preco(int dia, int eh_estudante, int eh_socio) {
    const int SEXTA_FEIRA = 5;
    if (dia < SEXTA_FEIRA) {
        //  R$ 15.00 com 30% de desconto se eh estudante
        return 15. * (1. - ((eh_estudante) * .3));
    }
    else {
        //  R$ 30.00 com 20% de desconto se eh socio e 30% se eh estudante
        return 30. * (1. - ((eh_socio) * .2) - ((eh_estudante) * .3));
    }
}

int main() {
    int dia_da_semana, eh_estudante, eh_socio;
    scanf("%d%d%d", &dia_da_semana, &eh_estudante, &eh_socio);
    if (eh_estudante) {
        printf("ESTUDANTE: ");
    }
    else if (eh_socio) {
        printf("SOCIO: ");
    }
    else {
        printf("COMUM: ");
    }
    printf("R$ %.2lf\n", preco(dia_da_semana, eh_estudante, eh_socio));
    return 0;
}
