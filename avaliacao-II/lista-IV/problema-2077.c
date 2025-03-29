/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 2077 - É um número triangular?
        Link: https://www.thehuxley.com/problem/2077
*/

#include <stdio.h>

void teste_num_triangular(int n, int d, int eh_triangular) {
    if (eh_triangular) {
        printf("%d * %d * %d = %d\nVerdadeiro\n", (d - 1), d, (d + 1), n);
        return;
    }
    else {
        if (d >= n) {
            printf("Falso\n");
            return;
        }
        else {
            //  requisite a leitura do proximo possivel divisor
            teste_num_triangular(n, d + 1, (d * (d + 1) * (d + 2) == n));
            return;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    teste_num_triangular(n, 1, 0);
	return 0;
}