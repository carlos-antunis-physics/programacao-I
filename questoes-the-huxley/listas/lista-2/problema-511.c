/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 511 - Critério do seguro
        Link: https://www.thehuxley.com/problem/511
*/

#include <stdio.h>

int main() {
    int eh_homem, tem_mais_de_40;
    //  ler se eh homem e se tem mais de 40 anos
    scanf("%d %d", &eh_homem, &tem_mais_de_40);
    //  computar se o seguro ser? caro
    printf("%d\n", !eh_homem && tem_mais_de_40);
    return 0;
}