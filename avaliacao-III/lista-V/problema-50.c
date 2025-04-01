/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 50 - Foto de Família
        Link: https://www.thehuxley.com/problem/50
*/

#include <stdio.h>

void imprimir_ordenacao_de_ambrosina(int pessoas, double[]);
void ordenar(double [], int, int);

int main() {
    double a[4] = {};
    //  imprimir ordenacao de ambrosina
    imprimir_ordenacao_de_ambrosina(4, a);
    return 0;
}

void ordenar(double a[], int n, int N) {
    if (N == 1) {
        return;
    }
    if (n == N - 1) {   // se nao ha elementos para ordenar
        //  ordene a parte da array ainda nao ordenada
        ordenar(a, 0, N - 1);
        return;
    }
    if (a[n] > a[n + 1]) {
        double swap_var = a[n];
        a[n] = a[n + 1];
        a[n + 1] = swap_var;
    }
    // ordene os proximos anteriores da lista
    ordenar(a, n + 1, N);
    return;
}

void imprimir_ordenacao_de_ambrosina(int pessoas, double a[]) {
    if (!pessoas) {
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", a[0], a[2], a[3], a[1]);
        return;
    }
    double altura;
    scanf("%lf", &altura);
    a[0] = altura;
    //  insira ordenadamente a altura na lista
    ordenar(a, 0, 4);
    //  requisitar a leitura da altura da proxima pessoa
    imprimir_ordenacao_de_ambrosina(pessoas - 1, a);
}