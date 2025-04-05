/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 407 - 3n + 1
        Link: https://www.thehuxley.com/problem/407
*/

#include <stdio.h>

void computar_tamanhos_maximos_de_ciclos();

unsigned tamanho_do_ciclo(unsigned);
unsigned tamanho_maximo_de_ciclo(unsigned, unsigned, unsigned);

int main() {
    computar_tamanhos_maximos_de_ciclos();
    return 0;
}

void computar_tamanhos_maximos_de_ciclos() {
    unsigned a, b;
    int scanf_status = scanf("%u%u", &a, &b);
    if (scanf_status == EOF) {  // nao havendo mais elementos para leitura (END OF FILE)
        return;
    }
    unsigned min = (a > b) ? b : a;
    unsigned max = (a > b) ? a : b;
    //  escreva os valores e o tamanho maximo de ciclo
    printf("%u %u %u\n", a, b, tamanho_maximo_de_ciclo(min + 1, max, tamanho_do_ciclo(min)));
    //  requisite a leitura das proximas entradas
    computar_tamanhos_maximos_de_ciclos();
}

unsigned tamanho_do_ciclo(unsigned n) {
    return (n == 1) ? 1 : (1 + tamanho_do_ciclo((!(n % 2)) ? (n / 2) : (3 * n + 1)));
}

unsigned tamanho_maximo_de_ciclo(unsigned n, unsigned N, unsigned ciclo_max) {
    if (n >= N) {               // se nao ha mais numeros no intervalo
        return ciclo_max;
    }
    unsigned ciclo_atual = tamanho_do_ciclo(n);
    ciclo_max = (ciclo_atual > ciclo_max) ? ciclo_atual : ciclo_max;
    return tamanho_maximo_de_ciclo(n + 1, N, ciclo_max);
}