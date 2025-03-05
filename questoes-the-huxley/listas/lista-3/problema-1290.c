/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1290 - L5Q2 - Rickception
        Link: https://www.thehuxley.com/problem/1290
*/

#include <stdio.h>

int valor_da_serie(int n, int t) {
    if (t == 0) {
        return n;
    }
    else {
        int m = valor_da_serie(n, t - 1);
        if (!(t % 2)) {
            return m + (m % 5);
        }
        else {
            return m + 3;
        }
    }
}

int main() {
    int n, t;
    //  ler quantos pares precisam ser lidos
    scanf("%d%d", &n, &t);
    printf("%d\n", valor_da_serie(n, t));
    return 0;
}