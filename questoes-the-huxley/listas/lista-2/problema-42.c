/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 42 - Eleitor
        Link: https://www.thehuxley.com/problem/42
*/

#include <stdio.h>

int main() {
    int idade;
    //  ler idade
    scanf("%d", &idade);
    if (idade < 16) {
        printf("nao eleitor\n");
    }
    else if ((18 <= idade) && (idade <= 65)) {
        printf("eleitor obrigatorio\n");
    }
    else {
        printf("eleitor facultativo\n");
    }
    return 0;
}