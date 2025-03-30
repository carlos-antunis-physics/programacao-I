/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1114 - Cálculo de Série
        Link: https://www.thehuxley.com/problem/1114
*/

#include <stdio.h>
#include <math.h>

int eh_par(int);
double dividendo(int);
double divisor(int);
double serie(int);

int main() {
    int N;
    //  ler quantidade de termos
    scanf("%d", &N);
    //  imprimir o valor da serie
    printf("S: %.2lf\n", serie(N));
    return 0;
}

double serie(int N) {
    if (N == 1) {
        return 1.;
    }
    double termo = dividendo(N) / divisor(N);
    return termo + serie(N - 1);
}

int eh_par(int N) {
    return !(N % 2);
}

double dividendo(int N) {
    return eh_par(N) ? pow(2., N - 1) : N;
}
double divisor(int N) {
    return eh_par(N) ? 3 * N / 2 : pow(2., N - 1);
}