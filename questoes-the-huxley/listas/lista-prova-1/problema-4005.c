/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4005 - Recanto Lenhoso em Perigo!
        Link: https://www.thehuxley.com/problem/4005
*/

#include <stdio.h>

int eh_palindromo(int a, int b, int d, int e) {
    return (a == e) && (b == d);
}
int gemeo_calido(int sinal) {
    return !(sinal % 2) && (sinal % 7);
}
int gemeo_cinzento(int sinal) {
    return !(sinal % 7) && (sinal % 2);
}
int vale_incerto(int sinal) {
    return (50000 <= sinal) && (sinal <= 99999);
}
int profundezas_do_gigante(int sinal) {
    return (100 <= sinal) && (sinal <= 49999);
}
int abrolho_sombrio(int sinal) {
    return (0 < sinal) && (sinal < 3);
}
void caracterizar_sinal(int a, int b, int c, int d, int e) {
    int sinal = a * 1e4 + b * 1e3 + c * 1e2 + d * 1e1 + e;
    //  checar se eh pegadinha
    if (eh_palindromo(a, b, d, e)) {
        printf("Feldspato, de um esporro no Gabro por mim\n");
        return;
    }
    //  caracterizar a fonte do sinal
    else if (gemeo_calido(sinal)) {
        printf("Feldspato, va para Gemeo Calido\n");
        return;
    }
    else if (gemeo_cinzento(sinal)) {
        printf("Feldspato, va para Gemeo Cinzento\n");
        return;
    }
    else if (vale_incerto(sinal)) {
        printf("Feldspato, va para Vale Incerto\n");
        return;
    }
    else if (profundezas_do_gigante(sinal)) {
        printf("Feldspato, va para Profundezas do Gigante\n");
        return;
    }

    else if (abrolho_sombrio(sinal)) {
        printf("Feldspato, va para Abrolho Sombrio\n");
        return;
    }
    //  declarar erro de leitura
    else {
        printf("Feldspato, foi um erro de leitura\n");
        return;
    }
}

int main(int argc, char const *argv[]) {
    int alg_1, alg_2, alg_3, alg_4, alg_5;
    //  ler algarismos como char
    scanf("%d%d%d%d%d", &alg_1, &alg_2, &alg_3, &alg_4, &alg_5);
    //  caracterize a fonte do sinal
    caracterizar_sinal(alg_1, alg_2, alg_3, alg_4, alg_5);
    return 0;
}
