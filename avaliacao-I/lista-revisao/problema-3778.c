/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 3778 - Duelo condicional
        Link: https://www.thehuxley.com/problem/3778
*/

#include <stdio.h>

int main() {
    int nivel_p, nivel_i;
    double dano_p, vida_i;
    double multiplicador_p, multiplicador_i;

    scanf("%d%lf", &nivel_p, &dano_p);
    scanf("%d%lf", &nivel_i, &vida_i);

    if (nivel_p < 1 || nivel_i < 1) {
        printf("Nivel abaixo\n");
        return 0;
    }
    if (nivel_p > 20 || nivel_i > 20) {
        printf("Nivel acima\n");
        return 0;
    }

    multiplicador_p = 1.2
        + (nivel_p > 5) * .3
        + (nivel_p > 10) * .3
        + (nivel_p > 15) * .2;
    multiplicador_i = 1.2
        + (nivel_i > 5) * .3
        + (nivel_i > 10) * .3
        + (nivel_i > 15) * .2;

   dano_p *= multiplicador_p;
   vida_i *= multiplicador_i;
 
   vida_i -= dano_p;
 
    if (vida_i <= 0) {
       printf("Personagem 1 venceu\nDano causado: %.2lf\n", dano_p);
    }
    else {
       printf("Personagem 2 venceu\nVida restante: %.2lf\n", vida_i);
    }
    return 0;
}