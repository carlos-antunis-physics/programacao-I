/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 24 - Fatorial
        Link: https://www.thehuxley.com/problem/24
*/

#include <stdio.h>

int fatorial(int n) {
    return (n == 0) ? 1 : n * fatorial(n - 1);
}

void proximos_fatoriais(char * ultimos_fatoriais, int size) {
    int n;
    scanf("%d", &n);
    if (n == -1) {
        //  escreva os fatoriais
        printf("%s", ultimos_fatoriais);
        return;         // encerre o processo
    }
    else {
        //  alocar string com 10 caracteres a mais
        char fatoriais[size + 10];
        //  concatenar strings
        sprintf(fatoriais, "%s%d\n", ultimos_fatoriais, fatorial(n));
        //  requerer a leitura dos proximos valores
        proximos_fatoriais(fatoriais, size + 10);
        return;
    }
}

int main() {
    proximos_fatoriais("", 0);
    return 0;
}