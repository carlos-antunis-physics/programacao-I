/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 398 - Conta M�ltiplos
        Link: https://www.thehuxley.com/problem/398
*/

#include <stdio.h>
#include <math.h>

int mdc(int, int);
int mmc(int, int);
int contar_multiplos_ate_50(int);

int main() {
    int a, b;
    //  ler numeros
    scanf("%d%d", &a, &b);
    //  imprimir quantidade de multiplos comuns ate 50
    printf("%d\n", contar_multiplos_ate_50(mmc(a, b)));
    return 0;
}

int mdc(int a, int b) {
    a = (a < 0) ? -a: +a;   //  corrigir mdc para casos negativos
    return (b == 0) ? a : mdc(b, a % b);
}
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}
int contar_multiplos_ate_50(int a) {
    return (a > 0) ? (49 / a) : 0; // 49 para ser extritamente menor
}