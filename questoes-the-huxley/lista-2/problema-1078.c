/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1078 - Situação de um aluno
        Link: https://www.thehuxley.com/problem/1078
*/

#include <stdio.h>

int main() {
    int nota_1, nota_2, nota_3;
    double media;
    //  ler notas
    scanf("%d%d%d", &nota_1, &nota_2, &nota_3);
    //  computar a media das notas
    media = (nota_1 + nota_2 + nota_3) / 3.;
    if ((media >= 0.) && (media <=100.)) {
        //  media eh valida
        printf("A media do aluno foi %.2lf e ele foi ", media);
        if (media >= 70.) {
            printf("APROVADO\n", media);
        }
        else if (media <= 40.) {
            printf("REPROVADO\n", media);
        }
        else {
            printf("FINAL\n", media);
        }
    }
    else {
        printf("Media invalida\n");
    }
    return 0;
}