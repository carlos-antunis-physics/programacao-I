/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 180 - Elevador
        Link: https://www.thehuxley.com/problem/180
*/

#include <stdio.h>

int excede_capacidade(int, int);

int main() {
    unsigned N, c;
    //  ler quantidade de processos o elevador ira executar
    //  e sua capacidade maxima
    scanf("%u%u", &N, &c);
    //  executar o processamento dos andares
    if (excede_capacidade(N, c)) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}

int excede_capacidade(int andares, int capacidade) {
    // se completar os andares sem exceder a capacidade
    if (!andares) {
        return 0;
    }
    unsigned saida, entrada;
    //  leia a quantidade de pessoas que saem e entram no andar
    scanf("%u%u", &saida, &entrada);
    capacidade += (saida - entrada);    // atualizar a capacidade
    //  se a capacidade do elevador for excedida num andar
    if (capacidade < 0) {
        return 1;
    }
    //  requira a leitura do proximo andar
    return excede_capacidade(andares - 1, capacidade);
}