/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 6 - Equação de segundo grau
        Link: https://www.thehuxley.com/problem/6
*/

#include <stdio.h>

int main() {
    double a, b, c;
    double discriminante;
    //  ler coeficientes
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a == 0.) {
        //  nao eh equacao de segundo grau
        printf("NEESG\n");
        return 0;   // finalizar a execucao do programa
    }
    //  calcular discriminante
    discriminante = (b * b) - 4. * a * c;
    if (discriminante < 0.) {
        //  nao existem raizes reais
        printf("NRR\n");
        return 0;   // finalizar a execucao do programa
    }
    printf("%.2lf\n%.2lf\n", (-b + sqrt(discriminante)) / (2. * a), (-b - sqrt(discriminante)) / (2. * a));
    return 0;
}