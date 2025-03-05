/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 972 - É um número primo?
        Link: https://www.thehuxley.com/problem/972
*/

#include <stdio.h>

int eh_primo(int n, int divisor) {
    return (n == divisor) ?
        1 :
        (
            ((!(n % divisor)) || (n == 1)) ?
                0 :
                eh_primo(n, divisor + 1)
        );
}

void proximos_testes(char * ultimos_testes, int size) {
    int n;
    scanf("%d", &n);
    if (n == -1) {
        //  escreva os ultimos testes
        printf("%s", ultimos_testes);
        return;         // encerre o processo
    }
    else {
        //  alocar string com 2 caracteres a mais
        char testes[size + 2];
        //  concatenar strings
        sprintf(testes, "%s%d\n", ultimos_testes, eh_primo(n, 2));
        //  requerer a leitura dos proximos valores
        proximos_testes(testes, size + 2);
        return;
    }
}

int main() {
    proximos_testes("", 0);
    return 0;
}