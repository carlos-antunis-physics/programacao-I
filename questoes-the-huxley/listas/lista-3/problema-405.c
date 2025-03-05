/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 405 - Contando os dígitos pares
        Link: https://www.thehuxley.com/problem/405
*/

#include <stdio.h>

void proximo_digito(int quantidade_de_pares) {
    char digito;
    scanf("%c", &digito);
    if (digito == '\n') {   // no huxley foi necessario '\0' (nao sei porque)
        //  escreva os fatoriais
        printf("%d\n", quantidade_de_pares);
        return;         // encerre o processo
    }
    else {
        if (!(digito % 2)) {
            //  requerer a leitura dos proximos digitos
            proximo_digito(quantidade_de_pares + 1);
        }
        else {
            //  requerer a leitura dos proximos digitos
            proximo_digito(quantidade_de_pares);
        }
        return;
    }
}

int main() {
    proximo_digito(0);
    return 0;
}