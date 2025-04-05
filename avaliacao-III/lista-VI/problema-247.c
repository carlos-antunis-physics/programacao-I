/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 72 - Inverso
        Link: https://www.thehuxley.com/problem/72
*/

#include <stdio.h>

void ler_e_imprimir_na_ordem_inversa();

int main() {
    //  ler N numeros e escrever na ordem inversa
    ler_e_imprimir_na_ordem_inversa();
    printf("\n");
    return 0;
}

void ler_e_imprimir_na_ordem_inversa() {
    char letra;
    int status_scanf = scanf("%c", &letra);
    if (status_scanf == EOF) {  // nao havendo mais letras a serem lidas
        return;
    }
    //  requisite a leitura e escrita das proximas letras
    ler_e_imprimir_na_ordem_inversa();
    printf("%c", letra);        // escreva a letra
}