/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 2046 - Série com funções
        Link: https://www.thehuxley.com/problem/2046
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int);

int eh_primo(int, int);
int proximo_primo(int);

double serie(int);

int main() {
    int n;
    scanf("%d", &n);
    printf("\n%.2lf\n", serie(n));
	return 0;
}

int fatorial(int n) {
    return (n == 0) ? 1 : n * fatorial(n - 1);
}
int eh_primo(int n, int divisor) {
    if (n <= divisor) {
        return 1;
    } else {
        if (!(n % divisor)) {
            return 0;
        }
        return eh_primo(n, divisor + 1);
    }
}
int proximo_primo(int n) {
    if (eh_primo(n, 2)) {
        return n;
    } else {
        return proximo_primo(n + 1);
    }
}

double serie(int termos) {
    if (!termos) {
        return 0.;
    } else {
        int primo = proximo_primo(termos), fat = fatorial(termos);
        double s = ((double)fat / (double)primo) + serie(termos - 1);
        if (termos == 1) {
            printf("%d!/%d", termos, primo);
        } else {
            printf(" + %d!/%d", termos, primo);
        }
        return s;
    }
}